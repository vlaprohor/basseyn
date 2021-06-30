#include <stdio.h>
char *ft_strlowcase(char *str);
int main()
{
	char src[] = "DDD11";

	ft_strlowcase(src);
	printf("%s", src);
}
