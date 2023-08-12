/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:55:23 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/07 16:31:52 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*test;
	int		len;
	int		i;

	len = ft_len(src);
	test = (char *)malloc(sizeof(char) * len);
	if (!test)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		test[i] = src[i];
		i++;
	}
	test[i] = '\0';
	return (test);
}

/*int main()
{
	char str1[] = "Hello";
	char *sr2;
	char *sr3;

	sr2 = strdup(str1);
	sr3 = ft_strdup(str1);

	printf("function strdup: %s\n", sr2);
	printf("my function: %s", sr3);
	free(sr2);
}*/
