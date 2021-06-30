#include <stdio.h>
#include <stdlib.h>
int ft_atoi(char *str);

int main()
{
	char *a;

	a = "      ------+++--+-2147483648fdgs363";
	printf("%d", ft_atoi(a));
}
