#include <stdlib.h>
#include "st_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*newone;

	newone = ft_create_elem(data);
	newone->next = *begin_list;
	*begin_list = newone;
}
