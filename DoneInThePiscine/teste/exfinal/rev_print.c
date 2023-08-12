/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:51:48 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/08 13:24:14 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}
int main(int argc, char *argv[])
{
	if (argc == 2)
		rev_print(argv[1]);
}
