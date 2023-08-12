/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:58:47 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/25 11:17:58 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	if (size < 1)
	{
		return (n);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (n);
}

/*int main()
{
	char str[] = "Hello";
	unsigned int size;
	char dest[10];
	int c;

	size = 6;

	c = ft_strlcpy(dest, str, size);
	
	printf("my function result: %d\n", c);
}*/
