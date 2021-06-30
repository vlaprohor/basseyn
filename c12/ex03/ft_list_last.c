#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*iterator;

	if (!begin_list)
		return (0);
	iterator = begin_list;
	while (iterator->next)
		iterator = iterator->next;
	return (iterator);
}
