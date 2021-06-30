#include <stdio.h>
int ft_str_is_uppercase(char *str);
int main()
{
	int i;
	char *src;

	src = "hello";
	i = ft_str_is_uppercase(src);
	printf("%d", i);
}
