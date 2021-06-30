#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int));

int	square(int i)
{
	return (i * i);
}

int main()
{
	int tab[5] = {1, 2, 3, 4, 5};
	int i;
	int *r;

	r = ft_map(tab, 5, &square);
	i = 0;
	while (i < 5)
		printf("%d\n", r[i++]); 
}
