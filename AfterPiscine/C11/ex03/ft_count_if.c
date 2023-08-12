#include <stdio.h>
int ft_len(char *str)
{
	int i = 0;

	while(str[i++] != '\0')
	return(i);	
}

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i = 0;
	int j = 0;
	
	while (i < length)
	{
		if(f(tab[i]) != 0)
		  j++;
		i++;
	}
	return(j);
}
int main()
{
	char *tab[]= {"Ines", "Alves", ""};
	int z;

	z = ft_count_if(tab, 3, &ft_len);

	printf("%i", z);

	/*int i = 0;
	int j = 0;

	while(i <= 1)
	{
		j = 0;
		while(tab[i][j] != '\0')
		{
			printf("%c\n", tab[i][j]);
			j++;
		}
		i++;
	}*/
}
