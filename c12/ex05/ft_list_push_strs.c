#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*temp;
	t_list	*result;

	result = ft_create_elem(strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_create_elem(strs[i++]);
		temp->next = result;
		result = temp;
	}
	return (result);
}
