#include <unistd.h>

int	ft_base_check(char *base)
{
	int	i;
	int	n;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	n = 0;
	while (base[n] != '\0')
	{
		i = n;
		while (base[++i] != '\0')
		{
			if (base[i] == base[n])
				return (0);
		}
		n++;
	}
	return (1);
}

void	ft_write_reversed(char *base, int temp, int bs)
{
	int		i;
	int		n;
	char	c[40];

	if (temp == 0)
		write(1, base, 1);
	i = 0;
	while (temp)
	{
		c[i] = base[temp % bs];
		i++;
		temp = temp / bs;
	}
	c[i] = '\0';
	i = 0;
	while (c[i] != '\0')
		i++;
	n = 1;
	while (n <= i)
	{
		write(1, &c[i - n], 1);
		n++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			bs;
	long int	temp;

	if (ft_base_check(base))
	{
		temp = nbr;
		if (temp < 0)
		{
			temp *= -1;
			write(1, "-", 1);
		}
		bs = 0;
		while (base[bs] != '\0')
			bs++;
		ft_write_reversed(base, temp, bs);
	}
}
