#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*iterator;

	if (!(*begin_list1))
	{
		*begin_list1 = begin_list2;
		return ;
	}
	iterator = begin_list1;
	while (iterator->next)
		iterator = iterator->next;
	iterator->next = begin_list2;
}
