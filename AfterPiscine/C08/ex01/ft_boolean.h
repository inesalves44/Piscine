#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(x) (x % 2 == 0)
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments\n"
# define ODD_MSG "I have odd number of arguments\n"
# define SUCCESS TRUE
typedef int t_bool;
#endif
