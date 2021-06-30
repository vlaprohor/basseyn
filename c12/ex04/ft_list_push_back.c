#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*newone;
	t_list	*iterator;

	if (!*begin_list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	newone = ft_create_elem(data);
	iterator = *begin_list;
	while (iterator->next)
		iterator = iterator->next;
	iterator->next = newone;
}
