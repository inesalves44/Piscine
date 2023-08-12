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

size_t strlcat(dst, src, siz)
	char *dst;
	const char *src;
	size_t siz;
{
	char *d = dst;
	const char *s = src;
	 size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	printf("dlensize: %ld\n", dlen);
	n = siz - dlen;
	printf("n: %ld\n", n);
	
	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}
int main()
{
	char src[] = "Hello";
	char dest[60] = "Hi";
	unsigned int size = 5;
	unsigned int	c;
	c = ft_strlcat(dest, src, size);

	printf("the new string is: %s\n", dest);
	printf("the size of the new string is: %d\n", c);
	
	char src1[] = "Hello";
	char dest1[60] = "Hi";
	unsigned int size1 = 5;
	printf("the new string is: %s\n", dest1);
	printf("the size of the new string is: %ld\n", strlcat(dest1, src1, size1));
}
