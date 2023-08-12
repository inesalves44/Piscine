/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 16:18:25 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/04 19:22:56 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_len_base(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_ok(char *base, int len)
{
	int	i;
	int	k;

	i = 0;
	if (len <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[k] == base[i])
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

void	ft_put_base(int n, char *base, int len_base)
{
	if (n < len_base)
		write(1, &base[n], 1);
	else
	{
		ft_put_base((n / len_base), base, len_base);
		write(1, &base[n % len_base], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = ft_len_base(base);
	if (base_ok(base, len_base) == 1)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			write(1, "-", 1);
		}
		ft_put_base (nbr, base, len_base);
	}
	else
		return ;
}

/*int main()
{
	int i = 100;
	char base[] = "-0123456789ABCDEF";
	char base1[] = "0123456789";
	char base2[] = "01";
	ft_putnbr_base(i, base);
	write(1, "\n", 1);
	ft_putnbr_base(i, base1);
	write(1, "\n", 1);
	ft_putnbr_base(i, base2);
}*/
