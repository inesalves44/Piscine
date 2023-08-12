#include <stdlib.h>
#include "ft_list.h"

t_list *ft_create_elem(void *data)
{
	t_list *head;

	head = malloc(sizeof(t_list));
	head -> data = data;
	head -> next = NULL;
	return (head);
}

