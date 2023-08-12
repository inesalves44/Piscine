#include <unistd.h>
#include "ft_stock_str.h"
#include "final.h"

int main(int argc, char *argv[])
{
	t_stock_str *s_stock;
	
	s_stock = ft_strs_to_tab(argc, argv);
	ft_show_tab(s_stock);
}
