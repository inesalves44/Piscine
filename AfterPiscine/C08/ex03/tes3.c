#include <stdio.h>
#include "ft_point.h"
void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main()
{
	t_point point;
	set_point(&point);
	printf("%d\n", point.x);
	printf("%d\n", point.y);
	return (0);
}
