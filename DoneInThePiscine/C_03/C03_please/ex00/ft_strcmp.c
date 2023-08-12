/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:41:41 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/01 11:32:46 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*int main()
{
	char  *newstr1;
        char  *newstr2;
	char  *original1;
        char  *original2;
        
	newstr1 = "ABC";
	newstr2 = "abc";
	original1  = "ABC";
	original2 = "abc";
	
	printf("strcmp function: %d\n", strcmp(newstr1 , newstr2));
	printf("my function: %d\n", ft_strcmp(original1, original2));
}*/
