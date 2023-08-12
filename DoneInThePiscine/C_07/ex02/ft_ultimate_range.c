/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:43:09 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/08 08:10:42 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	len = max - min;
	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (-1);
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (i);
}

/*int main()
{
	int *tab;
	int min = 3;
	int max = 8;
	int i = 0;
	int c;

	c = ft_ultimate_range(&tab, min, max);
	
	printf("size of the array: %d\n", c);
	
	while (tab[i] != '\0')
	{	
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
}*/
