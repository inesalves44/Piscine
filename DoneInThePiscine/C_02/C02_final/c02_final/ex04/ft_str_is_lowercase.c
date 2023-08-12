/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:50:17 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/24 17:11:23 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 97 && str[j] <= 122)
			j++;
		else
			return (0);
	}
	return (1);
}

/*int main(int argc, char *argv[])
{
	if(argc == 2)
		printf("%d", ft_str_is_lowercase(argv[1]));
	else 
		printf("only two arguments!!");
}*/
