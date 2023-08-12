/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 07:30:13 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/02 08:06:03 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int is_character(char f)
{
	if (f == 32 || f == 9 || f == 11)
		return (1);
	return (0);
}
void	first_word(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] == 32 || str[i] == 9 || str[i] == 11)
		i++;

	while (str[i] != '\0' && str[i] != 9 && str[i] != 32 && str[i] != 11)
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
}
