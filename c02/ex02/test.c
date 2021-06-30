#include <stdio.h>
int ft_str_is_alpha(char *str);
int main()
{
	int i;
	char *src;

	src = "hello";
	i = ft_str_is_alpha(src);	
	printf("%d", i);
}
