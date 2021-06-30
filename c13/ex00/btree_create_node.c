#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*result;

	result = malloc(sizeof (t_btree));
	result->item = item;
	result->left = 0;
	result->right = 0;
	return (result);
}
