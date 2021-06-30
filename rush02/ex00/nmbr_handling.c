//#include <stdio.h>
#include <stdlib.h>
#include "ft_all.h"

char	*get_lion(int i)
{
	char	*result;
	int		n;

	result = malloc(sizeof (char) * (i + 1));
	result[0] = '1';
	n = 1;
	while (n < i)
		result[n++] = '0';
	result[n] = '\0';
	return (result);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while(*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

int	is_space(char c)
{
	if (c == '\f' || c == '\n' || c == '\t' || c == '\v' || c == ' ' || c == '\r')
		return (1);
	return (0);
}

char	*like_atoi(char *str, int *index)
{
	char	*result;
	int		i;
	int		n;
	int		k;

	i = *index;
	while (is_space(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
			return (0);
		i++;
	}
	n = 0;
	if (str[i] < '0' || str[i] > '9')
	{
		result = "0";
		return (result);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
		n++;
	}
	result = malloc(sizeof (char) * (n + 1));
	k = 0;
	i -= n;
	while (n-- > 0)
		result[k++] = str[i++];
	result[k] = '\0';
	*index = i;
	return (result);
}

/*int main(int argc, char **argv)
{
	char *out;

	out = like_atoi(argv[1]);
	printf("%s\n", out);
}*/
