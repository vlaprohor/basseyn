#include <stdio.h>
void ft_putnbr_base(int nbr, char *base);

int main()
{
	char *c;
	int x;

	c = "0123";
	x = 1230;
	ft_putnbr_base(x, c);
}
