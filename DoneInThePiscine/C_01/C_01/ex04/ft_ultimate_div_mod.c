/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:40:04 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/23 12:20:28 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main (void)
{
	int a;
	int b;

	a = 30;
	b = 15;

	printf("initial value of a: %d\n", a);
	printf("initial value of  b: %d\n", b);

	ft_ultimate_div_mod(&a, &b);

	printf("new value of a: %d\n", a);
	printf("new value of b: %d\n", b);
}
