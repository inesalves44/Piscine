#include <stdio.h>

int ft_bigger(int a, int b)
{
	 return (b - a);
}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 1;
	while(i < length)
	{
		if(f(tab[i - 1], tab[i]) < 0)
		  return(0);
		i++;
	}
	return(1);
}

int main()
{
	int tab[] = {1, 2, 5, 4};
	int z;

	z = ft_is_sort(tab, 4, &ft_bigger);
	printf("%i", z);
}
