#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n);
int main()
{
	char dest[200] = "mambamamba";
	char *src;

	src = "hello";
	ft_strncpy(dest, src, 7);
	printf("%s", dest);
}
