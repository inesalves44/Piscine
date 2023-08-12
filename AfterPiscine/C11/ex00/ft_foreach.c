/*#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_char('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	if (n < 10)
		ft_char(n + 48);
}*/

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i = 0;

	while(i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*int main()
{
	int tab[3] = {1, 2, 3};
	ft_foreach(tab, 3, ft_putnbr);
}*/
