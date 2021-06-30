#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr);

t_list	*ft_create_elem(void *data)
{
	t_list	*newone;

	newone = malloc(sizeof (t_list));
	newone->data = data;
	newone->next = 0;
	return (newone);
}

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

int main(int argc, char **argv)
{
	t_list	*list;
	int i;

	list = 0;
	i = 1;
	while (i < argc)
		ft_list_push_back(&list, argv[i++]);
	printf("%s\n", (char *)ft_list_at(list, 7777777)->data);
}
