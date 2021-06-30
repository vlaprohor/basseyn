#include <stdio.h>
#include <stdlib.h>

void	ft_strcpy(char *result, char *src)
{
	int		iterator;

	iterator = 0;
	while (src[iterator] != '\0')
	{
		result[iterator] = src[iterator];
		iterator++;
	}
	result[iterator] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		n;

	n = 0;
	while (src[n] != '\0')
		n++;
	result = malloc(sizeof (result) * n);
	ft_strcpy(result, src);
	return (result);
}

int main()
{
	char *st;
	char *res;

	st = "34763796ddg";
	res = ft_strdup(st);
	printf("%s\n", res);
}
