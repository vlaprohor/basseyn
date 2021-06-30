#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);
int main()
{
	int a;
	int b;
	int *pta;
	int *ptb;

	a = 20;
	b = 7;
	pta = &a;
	ptb = &b;
	ft_ultimate_div_mod(pta, ptb);
	printf("%d, %d", a, b);
}
