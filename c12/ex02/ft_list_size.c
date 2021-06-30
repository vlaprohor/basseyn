#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		n;
	t_list	*iterator;

	n = 0;
	iterator = begin_list;
	while (iterator)
	{
		n++;
		iterator = iterator->next;
	}
	return (n);
}
