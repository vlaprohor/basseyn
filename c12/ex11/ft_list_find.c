#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*iterator;

	iterator = begin_list;
	while (iterator)
	{
		if (!(*cmp)(iterator->data, data_ref))
			return (iterator);
		iterator = iterator->next;
	}
	return (iterator);
}
