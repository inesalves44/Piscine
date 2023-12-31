/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:53:51 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/22 15:01:50 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	arr[3];

	arr[0] = '0' ;
	while (arr[0] <= '9')
	{
		arr[1] = arr[0] + 1 ;
		while (arr[1] <= '9')
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= '9')
			{
				write(1, &arr, 3);
				if (arr != "789")
				{
					write (1, ", ", 2);
				}
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}

int main(void)
{
	ft_print_comb();

}
