/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:50:17 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/24 17:24:09 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] < 32 || str[j] >= 127)
			return (0);
		j++;
	}
	return (1);
}

/*int main()
{
	char str[] = "hello\n";

	printf("%d", ft_str_is_printable(str));
}*/
