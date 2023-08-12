#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
char *ft_strup(char *str)
{
	int i = 0;
	int size = ft_strlen(str);
	char *new;

	new = (char *)malloc(sizeof(char) * size);
	if(!new)
		return(NULL);
	while(str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
	free(new);	
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i = 0;
	t_stock_str *stock;

	stock = malloc((ac + 1) * sizeof(t_stock_str));
	if(!stock)
		return(NULL);

	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strup(av[i]);
		i++;
	}
	stock[i].str = 0;
	stock[i].copy = 0;
	return (stock);
}

int main (int argc, char *argv[])
{
	int i = 0;
	t_stock_str *s_stock;

	s_stock = ft_strs_to_tab(argc, argv);

	while(i < argc)
	{
		printf("the size: %d\n", s_stock[i].size);
		printf("the string: %s\n", s_stock[i].str);
		printf("the copy: %s\n", s_stock[i].copy);
		i++;
	}
	return (0);
}
