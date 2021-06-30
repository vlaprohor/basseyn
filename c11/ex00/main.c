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

void	ft_foreach(int *tab, int length, void(*f)(int));

int	main()
{
	int tab [10] = {0, 1, 12, 415, 124, 57, 12314, 12424627, 73572, 9872346};

	ft_foreach(tab, 10, &ft_putnbr);
}
