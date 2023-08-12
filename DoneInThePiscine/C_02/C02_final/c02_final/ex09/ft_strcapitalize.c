/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 09:26:22 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/29 09:17:17 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	isalphanum(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		else if (isalphanum(str[i - 1]) == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		else if (isalphanum(str[i - 1]) == 1 && str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
int	main()
{
	char str[] = "oi, tudo Bem? 42palaVras quarEnta-e-duas; cinquenta+e+um";

	ft_strcapitalize(str);
	printf("%s", str);
}
