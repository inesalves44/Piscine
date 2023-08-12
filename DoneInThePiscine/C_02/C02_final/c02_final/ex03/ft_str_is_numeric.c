/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:50:17 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/24 16:52:10 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= '0' && str[j] <= '9')
			j++;
		else
			return (0);
	}
	return (1);
}

/*int main()
{
	char str[] = "45645";

	printf("%d", ft_str_is_numeric(str));
}*/
