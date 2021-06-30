#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*temp1;
	t_list	*temp2;

	if ((*begin_list)->next == 0)
		return ;
	temp1 = *begin_list;
	temp2 = (*begin_list)->next;
	(*begin_list)->next = 0;
	*begin_list = temp2;
	while ((*begin_list)->next)
	{
		temp2 = (*begin_list)->next;
		(*begin_list)->next = temp1;
		temp1 = *begin_list;
		*begin_list = temp2;
	}
	(*begin_list)->next = temp1;
}
