/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:30:47 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/08 08:22:34 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
		return (0);
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*int main()
{
	int *tab;
	int max = 16;
	int min = 3;
	int i = 0;
	
	tab = ft_range(min, max);
	while (tab[i] != '\0')
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
}*/
