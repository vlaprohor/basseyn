#include <stdio.h>
char *ft_strstr(char *str, char *to_find);
int main()
{
	char dist[200] = "fkghsdlkh";
	char *src;

	src = "\0";
	printf("%s", ft_strstr(dist, src));
}
