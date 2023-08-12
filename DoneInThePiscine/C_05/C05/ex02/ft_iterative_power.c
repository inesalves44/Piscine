/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:07:57 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/04 21:14:09 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	number;

	number = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		number = nb * number;
		power --;
	}
	return (number);
}

/*int main()
{
	int n = 2;
	int p = 20;
	printf("%d",ft_iterative_power(n, p));
}*/
