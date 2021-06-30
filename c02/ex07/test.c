#include <stdio.h>
char *ft_strupcase(char *str);
int main()
{
	char src[] = "ddd";

	ft_strupcase(src);
	printf("%s", src);
}
