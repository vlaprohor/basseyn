#include <unistd.h>

void	ft_putnbr(long long int n)
{
	char		c;

	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
}

void	del(int i, int j)
{
	long long int	s;
	if (j == 0)
		write(1, "Stop : division by zero", 23);
	else
	{
		s = i / j;
		ft_putnbr(s);
	}
}

void	ostatok(int i, int j)
{
	long long int	s;
	if (j == 0)
		write(1, "Stop : modulo by zero", 21);
	else
	{
		s = i % j;
		ft_putnbr(s);
	}
}

void	fail(int i, int j)
{
	(void) i;
	(void) j;
	write(1, "0", 1);
}
