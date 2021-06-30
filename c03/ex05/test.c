#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int main()
{
	char dist[200] = "fkghsdlkh";
	char *src;

	src = "123124124";
	printf("%d", ft_strlcat(dist, src, 4));
}
