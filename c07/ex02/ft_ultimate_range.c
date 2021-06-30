#include <stdio.h>
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		range = (NULL);
		return (0);
	}
	size = max - min;
	range = (NULL);
	range = malloc(sizeof (*range) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		*range[i] = min + i;
		i++;
	}
	return ((max - min) * sizeof (int));
}
