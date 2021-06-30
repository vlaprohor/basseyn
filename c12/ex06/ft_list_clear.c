#include <stldlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temp;

	while (begin_list)
	{
		(*free_fct)(begin_list->data);
		temp = begin_list->next;
		begin_list->next = 0;
		free(begin_list);
		begin_list = temp;
	}
}
