#include <stdio.h>
#include "ft.h"

int main()
{
	int a = 15;
	int b = 20;

	printf("a: %d, b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("new a: %d, new b: %d", a, b);
}
