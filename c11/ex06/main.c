#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main()
{
	char *tab[5];
	char *c1;
	char *c2;
	char *c3;
	char *c4;
	char *c5;
	int	n;

	c3 = "1234";
	c4 = "1111";
	c2 = "22222";
	c1 = "sdafasg";
	c5 = 0;
	tab[0] = c1;
	tab[1] = c2;
	tab[2] = c3;
	tab[3] = c4;
	tab[4] = c5;
	n = 0;
	ft_sort_string_tab(tab);
	while (n < 5)
		printf("%s\n", tab[n++]);
}	
