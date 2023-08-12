/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:50:17 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/24 17:01:15 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			j++;
		}
		else if (str[j] >= 'A' && str[j] <= 'Z')
		{
			j++;
		}
		else
			return (0);
	}
	return (1);
}

/*int main()
{
	char str[] = "fedfnak";

	printf("%d", ft_str_is_alpha(str));
}*/
