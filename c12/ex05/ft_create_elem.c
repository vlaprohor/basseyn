#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*newone;

	newone = malloc(sizeof (t_list));
	newone->data = data;
	newone->next = 0;
	return (newone);
}
