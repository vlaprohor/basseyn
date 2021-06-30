//#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"
/*typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
}	t_stock_str;
*/
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != 0)
		n++;
	return (n);
}

char	*copstr(char *src)
{
	char	*result;
	int		n;

	n = 0;
	while (src[n] != '\0')
		n++;
	result = malloc(sizeof (*result) * (n + 1));
	n = 0;
	while (src[n] != '\0')
	{
		result[n] = src[n];
		n++;
	}
	result[n] = '\0';
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	i = 0;
	result = malloc (sizeof (t_stock_str) * (ac + 1));
	if (!result)
		return (0);
	i = 0;
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = copstr(av[i]);
		i++;
	}
	return (result);
}

/*int main(int argc, char **argv)
{
	t_stock_str *test;

	test = ft_strs_to_tab(argc, argv);
	int n = 0;
	while (n++ < argc)
		printf("%d\n%s\n%s\n", test[n].size, test[n].str, test[n].copy);
}*/
