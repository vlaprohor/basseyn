#include <stdlib.h>

int	check_input(char *s)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
	{
		if ((s[n] != ' ' && s[n] <= '0') || s[n] >= '9')
			return (0);
		if (s[n] >= '0' && s[n] <= '9' && s[n + 1] >= '0' && s[n + 1] <= '9')
			return (0);
		n++;
	}
	if (n != 31)
		return (0);
	return (1);
}

int	*separate_input(char *str)
{
	int	*result;
	int	i;
	int	n;

	result = malloc(sizeof (int) * 16);
	i = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= '0' && str[n] <= '9')
		{
			result[i] = str[n] - '0';
			i++;
		}
		n++;
	}
	return (result);
}

int	check_circs(int *inpt)
{
	int	n;

	n = 0;
	while (n < 16)
	{
		if (inpt[n] < 1 || inpt[n] > 4)
			return (0);
		if (n < 4 && (inpt[n] + inpt[n + 4] > 5))
			return (0);
		if (n > 7 && n < 12 && (inpt[n] + inpt[n + 4] > 5))
			return (0);
		n++;
	}
	return (1);
}
