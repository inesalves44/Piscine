#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void ft_putstr(int fd, char *str)
{
	int i = 0;

	while(str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

void ft_print_error(char *file, char *str)
{
	ft_putstr(2, "ft_cat: ");
	ft_putstr(2, file);
	ft_putstr(2, str);
}

void ft_display(char *file)
{
	char s;
	int fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_print_error(file, ": No such file or directory\n");
	else
	{
		while (read(fd, &s, 1) > 0)
			write(1, &s, 1);
		if (errno == EISDIR)
			ft_print_error(file, ": Is a directory\n");
		close(fd);
	}
}

void ft_read(void)
{
	char ch;

	while(read(0, &ch, 1) != 0)
		write(1, &ch, 1);
}

int main(int argc, char *argv[])
{
  	int i;
	if (argc < 2)
		ft_read();
	else
	{
	  	i = 1;
		while (i < argc)
		{
			if (argv[i][0] == '-' && !argv[i][1])
				ft_read();
			else
				ft_display(argv[i]);
			i++;
		}
		
	}
}
