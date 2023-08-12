/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 09:48:39 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/03 14:23:28 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] != '\0' && i < n)
		return (s1[i] - s2[i]);
	return (0);
}

/*int main()
{
	char  *original1;
        char  *original2;
	unsigned int n;
        
	original1  = "abcd";
	original2 = "ab";
	n = 4;
	printf("strcmp function: %d\n", strncmp(original1, original2, n));
	printf("my function: %d\n", ft_strncmp(original1, original2, n));
}*/
