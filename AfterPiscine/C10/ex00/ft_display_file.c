#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void ft_display(const char *str)
{
	int fd;
	char *s;
	int a;

	fd = open(str, O_RDONLY);
	if(fd == -1)
		 write(2, "Cannot read file.\n", 18);
	while(read(fd, &s, 1))
		write(1, &s, 1);
	close(fd);
}

int main(int argc, char *argv[])
{
  	int size;

  	if(argc <= 1)
	  write(2, "File name missing.\n", 19);
	else if(argc > 2)
	  write(2, "Too many arguments.\n", 20);
	else
	{
		ft_display(argv[1]);
	}
}
