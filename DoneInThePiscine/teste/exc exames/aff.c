#include <unistd.h>
#include <stdio.h>

void	aff_z(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			write(1, &str[i], 1);
			break;
		}
 		i++;
	}
}
int	main(int argc, char *argv[])
{
	if (argc == 2)
		aff_z(argv[1]);
	else
		write(1, "a", 1);
	write(1, "\n", 1);
	return(0);
}
