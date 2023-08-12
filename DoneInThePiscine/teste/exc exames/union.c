#include <unistd.h>
int is_repeated (char *s1, char a)
{
	int y = 0;

	while (s1[y] != '\0')
	{
		if (s1[y] == a)
			return(0);
		y++;
	}
	return (1);
}

int is_repeated2(char *s1, char a, int j)
{
        int y = 0;

        while (y < j)
        {
                if (s1[y] == a)
                        return(0);
                y++;
        }
        return (1);
}

void union_mine(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		if(is_repeated2(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[j] != '\0')
	{
		if (is_repeated2(s2, s2[j], j) == 1)
		{
			if(is_repeated(s1, s2[j]) == 1)
				write(1, &s2[j], 1);
		}
		j++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		union_mine(argv[1], argv[2]);
	write(1, "\n", 1);

}
