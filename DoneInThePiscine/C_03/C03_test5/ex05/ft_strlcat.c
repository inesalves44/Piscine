/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:21:22 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/31 17:57:05 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <bsd/string.h>
#include <stdio.h>

int	ln(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	z;
	unsigned int	res;

	j = ln(src);
	i = ln(dest);
	z = 0;
	if (size > i)
		res = i + j;
	else
		res = j + size;
	while (src[z] != '\0' && (i + 1) < size)
	{
		dest[i] = src[z];
		z++;
		i++;
	}
	dest[i] = '\0';
	return (res);
}
/*int main()
{
	char src[] = "Hello";
	char dest[] = "Hi";
	unsigned int size = 2;
	unsigned int	c;
	c = ft_strlcat(dest, src, size);

	printf("the new string is: %s\n", dest);
	printf("the size of the new string is: %d\n", c);
}*/
