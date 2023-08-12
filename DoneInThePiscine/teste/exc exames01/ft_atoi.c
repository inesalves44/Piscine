#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int number = 0;
	char signal = '+';
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		signal = '-';
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')	
	{
		number = number *10 + (str[i] - '0');
		i++;	
	}
	if(signal == '-')
		number = number*(-1);
	return(number);
}
int main()
{
	char str[]= "      -123";
	char str1[]= "      -123";

	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str1));
}
