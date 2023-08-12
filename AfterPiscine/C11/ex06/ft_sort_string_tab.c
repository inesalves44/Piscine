#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i] != 0)
	{
		j = i;
		while (tab[j] != 0)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	char  *tab[]={ "Hello", "ola", 0};
	int i = 0;
	int j = 0;

	ft_sort_string_tab(tab);
	
	while(tab[i] != 0)
	{
		j = 0;
		while(tab[i][j] != '\0')
		{
			printf("%c", tab[i][j]);
			j++;
		}
		i++;
	}

}
