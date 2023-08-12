#include <stdio.h>
int	is_character(char c)
{
	if(c <= 42 ||c == 44 || (c >= 46 && c <= 47 ) || c >= 58)
		return (1);
	return (0);
}
int is_signal(char c)
{
	if (c == 45 || c == 43)
		return (1);
	return (0);
}
int	ft_atoi(const char *str)
{
	int i = 0;
	int number = 0;
	char signal = '+';
	while(is_character(str[i]) == 1)
		i++;
	while(is_signal(str[i]) == 1)
	{
		if(signal == str[i])
			signal = '+';
		else 
			signal = '-';
		i++;
	}
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	if (signal == '-')
		number = number *(-1);
	return(number);

}

int main()
{
        char *str;

        str = "\f\f\f---+--+\f\f1234ab567";
        printf("%d", ft_atoi(str));
}
