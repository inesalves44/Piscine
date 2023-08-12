/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:20:37 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/29 19:00:38 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	hexadecimal(unsigned char decimal)
{
	unsigned char	first;
	unsigned char	second;

	first = "0123456789abcdef"[decimal / 16];
	second = "0123456789abcdef"[decimal % 16];
	write(1, "\\", 1);
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			hexadecimal(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*int	main()
{
	char str[] = "Oi \fvoce \resta bem?";
	
	ft_putstr_non_printable(str);
}*/
