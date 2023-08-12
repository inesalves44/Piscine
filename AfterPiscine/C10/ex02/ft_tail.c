#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_atoi (char *number)
{
	int n = 0;
	int i;
	int signal = 1;

	if (number[i] == '-' || number[i] == '+')
	{
		if(number[i] == '-')
			signal = 0;
		i++;
	}
	while(number[i] >= '0' && number[i] <= '9')
	{
		n = n * 10 + (number[i] - 48);
		i++;
	}
	return(n * signal);
}

int size_files(int i, char **argv)
{
	int	fd2;
	char	buffer;
	int	size;

	size = 0;
	fd2 = open(argv[i], O_RDONLY);
	while (read(fd2, &buffer, 1))
		size++;
	close(fd2);
	return (size);
}

void	print_names(int i, int argc, char **argv)
{
	int	j;

	j = 0;
	if (argc > 4)
	{
		if (i > 3)
			write(1, "\n==> ", 5);
		else
			write(1, "==> ", 4);
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, " <==\n", 5);
	}
}
void ft_display(int i, int fd, int argc, char **argv)
{
	char buffer;
	int offset;
	int readed;
	int size_file;

	size_file = size_files(i, argv);
	offset = ft_atoi(argv[2]);
	print_names(i, argc, argv);
	if (argv[2][0] == '+')
	{
		while (readed != offset - 1)
			readed += read(fd, &buffer, 1);
		while (read(fd, &buffer, 1))
			write(1, &buffer, 1);
	}
	else
	{
		while (readed < (size_file - offset))
			readed += read(fd, &buffer, 1);
		while  (read(fd, &buffer, 1))
			write(1, &buffer, 1);
	}
	

}
int main(int argc, char *argv[])
{
  	int fd;
	int i;
	int j;
	
	i = 3;
	if (argc < 4)
		return(0);
	while(i < argc)
	{
		j = -1;
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
		  ft_display(i, fd, argc, argv);
		else
		{
			write(2, "ft_tail: ", 9);
			while (argv[i][++j])
				write(2, &argv[i][j], 1);
			write(2, ": No such file or directory\n", 28);
		}
		close(fd);
		i++;
	}
	return(0);
}
