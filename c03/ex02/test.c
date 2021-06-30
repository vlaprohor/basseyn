#include <stdio.h>
char *ft_strcat(char *dest, char *src);
int main()
{
	char dist[200] = "fkghsdlkh";
	char *src;

	src = "123124124";
	printf("%s", ft_strcat(dist, src));
}
