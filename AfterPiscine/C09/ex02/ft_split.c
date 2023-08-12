#include <stdio.h>
#include <stdlib.h>

int ft_len(char *str)
 {
 	int i = 0;

	while(str[i] != '\0')
	  	i++;
	return(i);
 }
int count_words(char *str, char *charset)
{
	int i = 0;
	int j;
	int a = 1;

	while(str[i] != '\0')
	{
		j = 0;
		while(str[i] == charset[j])
		{
	  		j++;
	      		i++;
			if (j == ft_len(charset))	
				a++;
		}
		i++;
	}
	return(a + 1);
}

int check_separators(char *str, char *charset, int final, int inicial)
{
	int y = inicial;
    	int z;

    	while (y <= final)
	{ 
        	z = 0;
        	if(str[y] == charset[z])
        	{
			while (str[y] == charset[z] && y <= final)
		    	{
                		y++;
                		z++;
		    	}
            		if(z == ft_len(charset))
                        	return(1);
			else
			  y++;
        	}
        	else
		    y++;
	}
    return(0); 
}

char *create_words(char *str, char *charset, int final, int inicial)
{
	final = final - ft_len(charset) + 1;
	int n = 0;
	int a = inicial;
	
	char *word;

	word = (char *)malloc(sizeof(char) * (final - inicial + 1));
	if(!word)
	  return(NULL);
	while(n < (final - inicial))
	{
		word[n] = str[a];
		n++;
		a++;
	}
	word[n] = '\0';
	return(word);
}

char *creat_words2(char *str, int i, int j)
{
    i = i + 1;
    char *new;
    new = malloc(sizeof(char) * (i - j + 1));
    if(!new)
        return (NULL);
    int z = 0;
    int a = j;

    while (z <= (i - j))
    {
        new[z] = str[a];
        z++;
        a++;
    }
    new[z] = '\0';
    return(new);
}

char	**ft_split(char *str, char *charset)
{
	char **new;
	int i;
	int y = 0;
	int a = 0;
	int len_str = count_words(str, charset);
	int len = ft_len(str);
	new = (char **)malloc(sizeof(char *) * len_str);
	if(!new)
	  return (NULL);
	while(y <= (len_str - 1) && i <= len)
	{
		while(check_separators(str, charset, i, a) == 0 && i != (len - 1))
            	i++; 
        	if (y != (len_str - 1))
        	{
			  new[y] = create_words(str, charset, i, a);
            		a = i + 1;  
        	}
        	else
		{
            		new[y] = creat_words2(str, i, a);
		}
        	y++;
	}
	new[y] = 0;
	return(new);
}
int main()
{
  	char str[]= "Ines de Dias de Alves";
  	char charset[] = " de ";
  	char **new;
	char *str2;

	new = ft_split(str, charset);
	int i = 0;
	while(new[i])
	{
		printf("%s\n", new[i]);
		i++;
	}

	i = 0;

	while(new[i])
	{
		free(new[i]);
		i++;
	}
	free(new);
}
