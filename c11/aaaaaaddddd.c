#include <unistd.h>

void	ft_putnbr(int n)
{
	long int	i;
	char		c;

	i = n;
	if (i < 0)
	{
		write(1, "-", 1);
		i *= -1;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	if (i < 10)
	{
		c = i + '0';
		write(1, &c, 1);
	}
}

void	del(int i, int j)
{
	if (j == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(i / j);
}

void	ostatok(int i, int j)
{
	if (j == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(i % j);
}

void	fail(int i, int j)
{
	(void) i;
	(void) j;
	write(1, "0", 1);
}
