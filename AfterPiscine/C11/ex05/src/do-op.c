#include <unistd.h>
#include <stdio.h>
#include "ft.h"

int ft_atoi(char *str)
{
	int		i;
	int		mult;
	int		nb;

	mult = 1;
	nb = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
		str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mult *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= mult;
	return (nb);

}

int ft_opt(char *str)
{
	int i = 0;

	if(!(str[i] == 45 || str[i] == 43 || str[i] == 42 || str[i] == 47 || str[i] == 37))
	{
		write(1, "0", 1);
		return(-1);
	}
	return(0);
}

void ft_number (int number)
{
  	if(number < 0)
	{
	  	write(1, "-", 1);
		number = number * (-1);
	}
  	if(number < 10)
	{
	  number = number + 48;
	  write(1, &number, 1);
	}
	else
	{
		ft_number(number / 10);
		ft_number(number % 10);
	}
}

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int test;
	char operator;

	if (argc == 4)
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);
		test = ft_opt(argv[2]);
		if (test != -1)
		{
			result = ft_operation(num1, num2, argv[2]);
			ft_number(result);
		}
	}
}
