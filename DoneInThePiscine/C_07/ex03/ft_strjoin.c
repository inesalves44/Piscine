/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:56:33 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/08 08:19:13 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	len_total(int size, char **strs, char *sep)
{
	int	j;
	int	a;

	j = 0;
	a = 0;
	while (j < size)
	{
		a += len(strs[j]);
		j++;
	}
	return (a + (size - 1) * len(sep) + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
	{
		dest[n + i] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_t;
	int		i;
	char	*str;

	len_t = len_total(size, strs, sep);
	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = (char *)malloc(sizeof(char) * len_t);
	if (!str)
		return (NULL);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

/*int main()
{
	char *strs[]= {"Ines", "Dias", "Alves"};
	char sep[] = " de ";
	char *arr;
	int size = 3;

	arr = ft_strjoin(size, strs, sep);

	printf("%s\n", arr);
	free (arr);
}*/
