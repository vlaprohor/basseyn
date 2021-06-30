#include <stdio.h>
void ft_rev_int_tab(int *tab, int size);
int main()
{
	int i[4];
	int *pt[4];

	i[0] = 1;
	i[1] = 9;
	i[2] = 3;
	i[3] = 4;
	pt[0] = i;
	ft_rev_int_tab(i, 4);
	printf("%d, %d", i[0], i[3]);
}
