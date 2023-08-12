#include <stdio.h>

int ft_great(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		str[i] = str[i] + 1;
		i++;
	}
	return(0);
}

int ft_any(char **tab, int(*f)(char*))
{
	int i = 0;
	
	while(tab[i][0] != '\0')
	{
		if(f(tab[i]))
		  return (1);
		i++;
	}
	return(0);
}

int main()
{
	char *tab[] = {"Hello!", "how"};
	int g;

	g = ft_any(tab, &ft_great);
	printf("%i", g);
}
