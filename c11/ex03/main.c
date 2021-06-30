#include <stdio.h>

int ft_count_if(char **tab, int length, int(*f)(char*));

int ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

int main()
{
	char *tab[3];
	char *c1;
	char *c2;
	char *c3;

	c1 = "1";
	c2 = "2";
	c3 = "3";
	tab[0] = c1;
	tab[1] = c2;
	tab[2] = c3;
	printf("%d", ft_count_if(tab, 3, &ft_strlen));
}
