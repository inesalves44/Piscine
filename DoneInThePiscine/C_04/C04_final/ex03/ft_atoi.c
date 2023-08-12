/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:06:43 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/04 19:13:16 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	is_signal(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	return_s(char c)
{
	if (c == '-')
		return (-1);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	signal;

	i = 0;
	signal = 1;
	number = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (is_signal(str[i]) == 1)
	{
		signal = return_s(str[i]) * signal;
		i++;
	}
	while (str[i] != '\0' && is_number(str[i]) == 1)
	{
		number = 10 * number + (str[i] - '0');
		i++;
	}
	return (number * signal);
}

/*int main()
{
        char *str;

        str = "\f\f\f----++1234ab567";
        printf("%d", ft_atoi(str));
}*/
