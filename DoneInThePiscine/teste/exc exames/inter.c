/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 08:42:57 by idias-al          #+#    #+#             */
/*   Updated: 2022/09/02 09:29:05 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	is_repeated(char *str, char a, int z)
{
	int y = 0;
	
	while (y < z)
	{
		if(str[y] == a)
			return 0;
		y++;
	}
	return 1;
}
void	inter(char *s1, char *s2)
{
	int i = 0;
	int j;

	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				if (is_repeated(s1, s1[i], i) == 1)
				{	
					write(1, &s1[i],1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}


int main(int argc, char *argv[])
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
}
