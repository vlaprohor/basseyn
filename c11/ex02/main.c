#include <stdio.h>

int ft_any(char **tab, int(*f)(char*));

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

	c1 = "";
	c2 = "246 ";
	tab[0] = c1;
	tab[1] = c2;
	tab[2] = NULL;
	printf("%d", ft_any(tab, &ft_strlen));
}
