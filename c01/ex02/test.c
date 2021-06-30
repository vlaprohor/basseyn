#include <stdio.h>
void ft_swap(int *a, int *b);
int main()
{
	int a;
	int b;
	int *pta;
	int *ptb;

	a = 10;
	b = 99;
	pta = &a;
	ptb = &b;
	ft_swap(pta, ptb);
	printf("%d, %d", a, b);
}
