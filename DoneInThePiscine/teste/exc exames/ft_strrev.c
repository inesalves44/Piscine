/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:08:12 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/02 08:42:04 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	len(char *str)
{
	int j = 0;

	while(str[j] != '\0')
		j++;
	return(j);
}
char	*ft_strrev (char *str)
{
	int i = 0;
	int size;
	char aux;

	size = len(str) - 1;
	while (i < size)
	{
		aux = str[i];
		str[i] = str[size];
		str[size] = aux;
		i++;
		size--;
	}
	return (str);
}

int main()
{
	char a[] = "helo";
	printf("%s", ft_strrev(a));
}
