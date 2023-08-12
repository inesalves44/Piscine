/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:48:00 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/21 12:44:33 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_1(int number)
{
	if (number < 10)
	{
		ft_putchar('0');
		ft_putchar(number + '0');
	}
	else
	{
		ft_putchar (number / 10 + '0');
		ft_putchar (number % 10 + '0');
	}
}

void	print_two_number(int n1, int n2)
{
	print_1(n1);
	ft_putchar(' ');
	print_1(n2);
	if (n1 != 98 || n2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0 ;
	n2 = 0 ;
	while (n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			print_two_number(n1, n2);
			n2 ++;
		}
		n1 ++;
	}
}

int main(){
ft_print_comb2();
}
