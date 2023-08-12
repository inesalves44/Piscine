/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:08:40 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/23 15:32:16 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	d;

	j = 0;
	while (j < size)
	{	
		d = tab [j];
		tab [j] = tab [(size - 1)];
		tab [(size - 1)] = d;
		j++;
		size --;
	}
}
/*int main()
{
	int arr[] = {10, 2, 61, 70, 84};
	int i = 0;
	int size = sizeof(arr)/sizeof(arr[0]);


	ft_rev_int_tab(arr, size);

	while (i < size) {
  		printf("%d\n", arr[i]);
		i++;
	}

	printf("the size of the string is: %d", size);
}*/
