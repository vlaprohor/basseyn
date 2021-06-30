#ifndef FT_LIST_H
# define FT_LIST_H

t_list	*ft_create_elem(void *data);

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}	t_list;

#endif
