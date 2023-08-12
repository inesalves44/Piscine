/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:32:46 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/30 17:55:23 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src [n] != '\0' && n < nb)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main()
{
	char sr1[] = " Ines";
	char sr2[60] = "Hello";
	unsigned int number = 10;
       char sr3[] = " Ines";
        char sr4[60] = "Hello";
        unsigned int number2 = 10;
	char *cat;
	char *new;
	
	cat = strncat(sr2, sr1, number);
	new = ft_strncat(sr4, sr3, number2);

	printf("value of the cat function: %s s\n", cat);
	printf("value of my function:      %s s", new);
}*/
