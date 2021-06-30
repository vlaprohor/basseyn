#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *dest, char *src);
int main()
{
	char dest[200] = "mambamamba";
	char *src;

	src = "hello";
	ft_strcpy(dest, src);
	printf("%s", dest);
}
