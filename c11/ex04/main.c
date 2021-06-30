#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int	compare(int i, int j)
{
	return (i - j);
}

int main()
{
	int	tab[6] = {5, 5, 6, 7, 22, 3333};

	printf("%d", ft_is_sort(tab, 6, &compare));
}
