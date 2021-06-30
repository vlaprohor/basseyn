#include <stdlib.h>
#include <unistd.h>
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

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (!root)
		return ;
	btree_apply_infix(root->left, applyf);
	(*applyf)(root->item);
	btree_apply_infix(root->right, applyf);
}

int	ft_strcmp(void *s1, void *s2)
{
	int	i;
	char *l;
	char *s;

	l = (char *)s1;
	s = (char *)s2;
	i = 0;
	while (l[i] != '\0' && s[i] != '\0')
	{
		if (l[i] == s[i])
		{
			i++;
		}
		else
			return (l[i] - s[i]);
	}
	return (l[i] - s[i]);
}

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)
		(void *, void *))
{
	if (!(*root))
	{
		*root = btree_create_node(item);
		return ;
	}
	if ((*cmpf)((*root)->item, item) <= 0)
		btree_insert_data(&((*root)->right), item, cmpf);
	else
		btree_insert_data(&((*root)->left), item, cmpf);
}

void	ft_putstr(void *str)
{
	char	*out;
	int		i;

	out = (char *)str;
	i = 0;
	while (out[i] != '\0')
		write(1, &out[i++], 1);
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	t_btree	*root;

	if (argc < 2)
		return (0);
	root = 0;
	for (int i = 1; i < argc; i++)
		btree_insert_data(&root, argv[i], &ft_strcmp);
	btree_apply_infix(root, &ft_putstr);
}
