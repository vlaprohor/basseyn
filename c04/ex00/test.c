#include <stdio.h>
int ft_strlen(char *str);
int main()
{
	char *str;

	str = "tut 15 simvolov";
	printf("%d", ft_strlen(str));

	str = "blabla";
	printf("%d", ft_strlen(str));
}
