#include "ft.h"
#include <unistd.h>

int ft_operation(int n1, int n2, char *str)
{
  	int i = 0;
	int result;
	if (n2 == 0 && (str[i] == '/' || str[i] == '%'))
	{
		write(1, "cant divid by 0", 15);
	}
	if(str[i] == '+')
	  result = add(n1, n2);
	else if(str[i] == '-')
	  result = subtraction(n1, n2);
	else if(str[i] == '*')
	  result = multi(n1, n2);
	else if(str[i] == '/')
	  result = division(n1, n2);
	else
	  result = remain(n1, n2);
	return(result);
}
