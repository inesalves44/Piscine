/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:11:10 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/01 11:46:02 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

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
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main()
{
	char sr1[] = "Hello";
	char sr2[60]=" World";
	char sr3[] = "Hello";
	char sr4[60] = " World";
	char *d;
	char *c;

	c = strcat(sr2, sr1);
	d = ft_strcat(sr4, sr3);
	printf("value of the function strcat: %s\n", c);
	printf("value of my function: %s", d);
}*/
