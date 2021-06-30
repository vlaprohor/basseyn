#include <stdio.h>
void ft_ft(int *nbr);
int main()
{
	int a;
	int *ptr;

	a = 33;
	ptr = &a;
	ft_ft(ptr);
	printf("%d", a);
}
