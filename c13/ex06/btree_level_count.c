#include "ft_btree.h"

int	get_max (int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

int	get_level(t_btree *root, int level)
{
	if (!root)
		return (level);
	return (get_max(get_level(root->left, level + 1),
			(get_level(root->right, level + 1))));
}

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (get_level(root, 0));
}
