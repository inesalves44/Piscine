#include <unistd.h>
void last(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	i = i - 1;
	while (i > 0)
	{
		if(str[i] == 32 || str[i] == '\t')
			break;	
		i--;
	}
	i++;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}


}

int main(int argc, char *argv[])
{
	if (argc == 2)
		last(argv[1]);
	write(1, "\n", 1);
}
