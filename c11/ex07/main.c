#include <stdio.h>

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

int ft_strlen(char *c)
{
	int n = 0;
	while (*c++)
		n++;
	return (n);
}


int ft_strlencmp(char *s1, char *s2)
{
	return (ft_strlen(s1) - ft_strlen(s2));
}

int	main()
{
	char *tab[5];
	char *c1;
	char *c2;
	char *c3;
	char *c4;
	char *c5;
	int	n;
	int (*cmp)(char *, char *);

	cmp = &ft_strlencmp;
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
	ft_advanced_sort_string_tab(tab, cmp);
	while (n < 5)
		printf("%s\n", tab[n++]);
}
