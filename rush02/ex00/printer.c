#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_all.h"

void	print_three(char *dict, char *nbr, int lenght)
{
	char	c[3];

	if (lenght == 3 && nbr[0] != '0')
	{
		c[0] = nbr[0];
		c[1] = '\0';
		out(c, dict);
		write(1, " ", 1);
		out("100", dict);
		print_three(dict, nbr++, lenght--);
	}
	if (lenght == 2 && nbr[0] != '0')
	{
		if (nbr[0] == '1')
			out(nbr, dict);
		else
		{
			c[0] = nbr[0];
			c[1] = '0';
			c[2] = '\0';
			out(c, dict);
			write(1, " ", 1);
			print_three(dict, nbr++, lenght--);
		}
	}
	if (lenght == 1 && nbr[0] != '0')
		out(nbr, dict);
}

void	print_result(char *dict, char *nbr, int lenght, int *index)
{
	char	*temp;
	int		n;

	if (lenght < 4)
	{
		temp = malloc(sizeof (char) * (lenght + 1));
		n = 0;
		while (n < lenght)
		{
			temp[n++] = nbr[*index];
			(*index)++;
		}
		temp[n] = '\0';
		print_three(dict, temp, lenght);
		free(temp);
		return ;
	}
	if (lenght % 3 == 0)
	{
		temp = malloc(sizeof (char) * 4);
		n = 0;
		while (n < 3)
			temp[n++] = nbr[(*index)++];
		temp[n] = '\0';
		print_three(dict, temp, 3);
		free(temp);
		temp = get_lion(lenght / 3 * 3);
		out(temp, dict);
		free(temp);
		print_result(dict, nbr, (lenght - 3), index);
	}
	else
	{
		temp = malloc(sizeof (char) * (lenght % 3 + 1));
		n = 0;
		while (n < lenght % 3)
			temp[n++] = nbr[(*index)++];
		temp[n] = '\0';
		print_three(dict, temp, lenght % 3);
		free(temp);
		temp = get_lion(lenght / 3 * 3);
		out(temp, dict);
		free(temp);
		print_result(dict, nbr, (lenght - lenght % 3), index);
	}
}

void	output_result(char *dict, char *atoinbr)
{
	char	*nbr;
	int		lenght;
	int		index;

	index = 0;
	nbr = like_atoi(atoinbr, &index);
	lenght = ft_strlen(nbr);
	index = 0;
	print_result(dict, nbr, lenght, &index);
	free(nbr);
}
