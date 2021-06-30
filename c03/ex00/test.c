#include <stdio.h>
int ft_strcmp(char *s1, char *s2);

int main()
{
	char *s1;
	char *s2;

	s1 = "BAa";
	s2 = "BAz";
	printf("%d", ft_strcmp(s1, s2));

}
