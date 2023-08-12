#include <unistd.h>
#include "ft_stock_str.h"

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_putnbr(int nbr)
{
	long int number;
	
	number = nbr;
	if(number < 10)
	{
		number = number + '0';
		write(1, &number, 1);
	}
	else 
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int i = 0;

	while(par[i].str != 0)
	{
		ft_putnbr(par[i].size);
		write(1,  "\n", 1);
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
