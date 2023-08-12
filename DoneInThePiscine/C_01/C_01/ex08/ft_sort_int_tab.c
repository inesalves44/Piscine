/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:25:40 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/23 14:24:55 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		if (tab[i] <= tab [i + 1])
		{
			i++;
		}
		else
		{	
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab [i + 1] = temp;
			i = 0;
		}
	}
}

/*int	main(void)
{
	int arr[] = {40 , 20, 60, 75, 10};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i = 0;
	
	ft_sort_int_tab(arr, size);

	while (i < size)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}*/
