#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)
		(void *, void *))
{
	t_btree	*newone;

	if (!(*root))
	{
		*root = btree_create_node(item);
		return ;
	}
	if ((*cmpf)((*root)->item, item) <= 0)
		btree_insert_data((*root)->right, item, cmpf);
	else
		btree_insert_data((*root)->left, item, cmpf);
}
