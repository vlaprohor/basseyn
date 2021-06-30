#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	result = malloc(sizeof (*result) * (max -min));
	while (i < max)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
