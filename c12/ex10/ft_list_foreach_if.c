#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)())
{
	t_list	*iterator;

	iterator = begin_list;
	while (iterator)
	{
		if (!(*cmp)(iterator->data, data_ref))
			(*f)(iterator->data);
		iterator = iterator->next;
	}
}
