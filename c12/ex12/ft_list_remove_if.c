#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)
(), void (*free_fct)(void *))
{
	t_list	*iterator;
	t_list	*temp;

	while (!(*cmp)((*begin_list)->data, data_ref))
	{
		temp = *begin_list;
		free_fct((*begin_list)->data);
		(*begin_list)->next = 0;
		free(*begin_list);
		*begin_list = temp;
	}
	iterator = *begin_list;
	while (iterator->next)
	{
		if (!(*cmp)(iterator->next->data, data_ref))
		{	
			temp = iterator->next->next;
			free_fct(iterator->next->data);
			iterator->next->next = 0;
			free(iterator->next);
			iterator->next = temp;
		}
		iterator = iterator->next
	}
}
