#include <stdlib.h>
#include <stdio.h>
#include "ft_all.h"

void	print_word(char *dict, int index)
{
	int		n;
	int		i;
	char	*prrrint;
	
	n = 0;
	while (is_space(dict[index]))
		index++;
	index++;
	while (is_space(dict[index]))
		index++;
	while (dict[index] != '\n' && dict[index++] != '\0')
		n++;
	prrrint = malloc(sizeof (char) * (n + 2));
	index -= n;
	i = 0;
	while (n > 0)
	{
		prrrint[i] = dict[index];
		i++;
		n--;
		index++;
	
	}
	prrrint[i] = '\0';
	ft_putstr(prrrint);
	free(prrrint);
	printf("%s\n", prrrint);
}

void	out(char *curr, char *dict)
{
	int		index;
	char	*ddd;

	index = 0;
	ddd = like_atoi(dict, &index);
	while ((str_cmp(curr, ddd) != 0) && dict[index] != '\0')
	{
		while (dict[index] != '\n')
			index++;
		free(ddd);
		ddd = 0;
		ddd = like_atoi(dict, &index);
	}
	if (dict[index] == '\0')
	{
		dict_failure();
		return ;
	}
	else
	{
		print_word(dict, index);
	}
}
