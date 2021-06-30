#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);
int main()
{
	char dist[200] = "fkghsdlkh";
	char *src;

	src = "123124124";
	printf("%s", ft_strncat(dist, src, 5));
}
