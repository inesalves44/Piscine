#include <unistd.h>

int is_repeated(char c, char *str, int j)
{
	int y = 0;

	while (y < j)
	{
		if (str[y] == c)
			return (0);
		y++;
	}
	return (1);

}

void	inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i]!= '\0')
	{
		j = 0;
		while(s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				if (is_repeated(s1[i], s1, i) == 1)
				{
					write(1, &s1[i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if(argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);	
}
