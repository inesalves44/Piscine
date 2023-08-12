#include <stdlib.h>
#include <stdio.h>

int multiply(int num)
{
	num = num + 10;
	return(num);
}

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i = 0;
	int *num;
	int *d;

	d = (num = (int *)malloc(sizeof(int) * length));
	if(!d)
	  return NULL;
	while(i < length)
	{
		num[i] = f(tab[i]);
		i++;
	}
	return(num);
}

int main()
{
	int tab[4] ={6, 3, 9, 4};
	int *num;
	int j = 0;
	num = ft_map(tab, 4, &multiply);
	
	while (j < 4)
		printf("%i", num[j++]);
}
