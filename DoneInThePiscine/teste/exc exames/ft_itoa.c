#include <unistd.h>
void	aff(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

}

int main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		int i = 0;
		while (argv[i])
			i++;	
		aff(argv[i - 1]);
	}
	write(1, "\n", 1);

}
