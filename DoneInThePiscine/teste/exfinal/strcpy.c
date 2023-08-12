/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:10:07 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/08 15:29:52 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int main()
{
	char str[] = "ola";
	char dest[5];
	char s1[] = "ola";
	char s2[6];

	ft_strcpy(str, dest);
	strcpy(s1, s2);
	printf("%s\n", dest);
	printf("%s", s2);
}
