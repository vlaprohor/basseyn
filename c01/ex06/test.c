#include <stdio.h>
int ft_strlen(char *str);
int main()
{
	int i;
	char *str;

	str = "hello";
	i = ft_strlen(str);
	printf("%d", i);
}
