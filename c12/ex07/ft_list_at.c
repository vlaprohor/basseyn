#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*iteraator;

	if (!begin_list)
		return (begin_list);
	iterator = begin_list;
	i = 0;
	while (i < nbr && iterator)
	{
		i++;
		iterator = iterator->next;
	}
	if (i == nbr)
		return (iterator);
	return (0);
}
