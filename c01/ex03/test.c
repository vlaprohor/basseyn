#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);
int main()
{
	int a;
	int b;
	int *div;
	int *mod;

	a = 10;
	b = 3;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("%d, %d", a, b);
}
