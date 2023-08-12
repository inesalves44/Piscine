/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:06:14 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/05 08:38:50 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_write(char **argv, int argc)
{
	int	y;
	int	z;

	y = 0;
	z = 1;
	while (z < argc)
	{
		y = 0;
		while (argv[z][y] != '\0')
		{
			write(1, &argv[z][y], 1);
			y++;
		}
		write(1, "\n", 1);
		z++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i)
	{
		i = 0;
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv [j + 1] = temp;
				j = 0;
			}
			j++;
		}
	}
	ft_write(argv, argc);
	return (0);
}
