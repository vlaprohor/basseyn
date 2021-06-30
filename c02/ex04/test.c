#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main()
{
	int i;
	char *src;

	src = "helLo";
	i = ft_str_is_lowercase(src);
	printf("%d", i);
}
