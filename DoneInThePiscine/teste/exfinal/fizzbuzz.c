/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 08:55:57 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/08 11:32:29 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	fizz()
{
	write(1, "fizz", 4);
	write(1, "\n", 1);
}

void buzz()
{
	write(1, "buzz", 4);
        write(1, "\n", 1);
}

void fb_write()
{
	write(1, "fizzbuzz", 8);
        write(1, "\n", 1);
}

void put_nbr(int n)
{
	if (n < 10)
	{
		n = n + 48;
		write(1, &n, 1);
	}
	else
	{
		put_nbr(n / 10);
		put_nbr(n % 10);
	}
}

void	fizzbuzz()
{
	int	n;
	
	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			fb_write();
		else if (n % 5 == 0)
			buzz();
		else if (n % 3 == 0)
			fizz();
		else
		{	
			put_nbr(n);
			write(1, "\n", 1);
		}
		n++;
	}
	
}
int main()
{
	fizzbuzz();
}
