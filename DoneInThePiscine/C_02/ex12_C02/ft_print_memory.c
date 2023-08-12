/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idias-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:41:05 by idias-al          #+#    #+#             */
/*   Updated: 2022/08/25 16:49:24 by idias-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_print_hex(void *addr)
{
	char addr_new[15];
	long b;
	int	 i;
	char f;
	
	
	b = (long)addr;
	
	i = 0;
	while (b > 0)
	{
		addr_new [i] = b % 16;
		if(addr_new[i] < 10)
			addr_new[i] += '0';
		else
			addr_new[i] += 87;
		b = b / 16;
		i++;
	}
	while (i < 15)
	{
		addr_new[i] = '0';
		i++;
	}
	while(--i >= 0)
	{
		write(1, &addr_new[i],1);
	}
	

}
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int char_print;
	unsigned int	i;
	char	*addr_new;
	
	i = 0;
	while (size > 0)
	{
		if(size >= 16)
		{
			char_print = 16;
			size -= 16; 
		}
		else
		{
			char_print = size;
			size = 0;
		}
		ft_print_hex(addr + i);
		write(1, ":", 1);
		write(1, " ", 1);
		i += 16;
		size = 0;
	}
	return (addr);
	
	
}
int main()
{
	char s[20] = "Bonjour mes amim";
	unsigned int size = 14;
	
	ft_print_memory(s, size);
}
