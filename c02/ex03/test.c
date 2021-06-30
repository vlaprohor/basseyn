#include <stdio.h>
int ft_str_is_numeric(char *str);
int main()
{
	int i;
	char *src;

	src = "02y";
	i = ft_str_is_numeric(src);
	printf("%d", i);
}
