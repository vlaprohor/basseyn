#include <stdio.h>
int ft_str_is_printable(char *str);
int main()
{
	int i;
	char *src;

	src = "2211";
	i = ft_str_is_printable(src);
	printf("%d", i);
}
