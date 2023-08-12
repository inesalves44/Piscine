/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:59:22 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/23 12:17:20 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	
	int x = 30;
	int y = 4;
	int div = 0;
	int mod = 0;
	
	printf("initial value of the division: %d\n ", div);
	printf("initial value of the remainder: %d \n ", mod);
	ft_div_mod(x, y, &div, &mod);
	printf("new value of the division: %d\n ", div);
        printf("new value of the remainder: %d \n ", mod);
}*/
