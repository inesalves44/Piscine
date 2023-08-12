/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:49:17 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/23 15:45:45 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int main (void)
{
	int c = 10;
	int d = 5;
	printf("inicial value of a: %d\n", c);
	printf("initial value of b: %d\n", d);

	ft_swap(&c, &d);

	printf("new value of a: %d\n", c);
	printf("new value of b: %d\n", d);

}*/
