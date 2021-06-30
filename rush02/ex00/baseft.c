#include <unistd.h>
#include "ft_all.h"

void	ft_putstr(char *c)
{
	int	n;

	n = 0;
	while (c[n] != '\0')
	{	
		write(1, &c, 1);
		c++;
	}
}

int	str_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}
