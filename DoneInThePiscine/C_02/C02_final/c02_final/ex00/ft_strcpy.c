/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:22:10 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/24 09:32:33 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		char newstr;
		char str1 []= "Hello";
		char strcpy_test[5];

		ft_strcpy(&newstr, argv[1]);

		printf("function value: %s\n", &newstr);
		
		strcpy(strcpy_test, str1);
		printf("value by strcpy: %s", strcpy_test);
	}
	else
	{
		printf("Has to be only two arguments!");
	}
}*/
