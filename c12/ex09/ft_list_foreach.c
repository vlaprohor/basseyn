#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*iterator;

	iterator = begin_list;
	while (iterator)
	{
		(*f)(iterator->data);
		iterator = iterator->next;
	}
}
