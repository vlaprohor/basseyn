#include <unistd.h>

int	ft_nmbr_dgts(int nb)
{
	int	i;

	i = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}	
	return (i);
}

int	ft_degree_ten(int i)
{
	int	out;

	out = 10;
	while (i > 1)
	{
		out = out * 10;
		i--;
	}
	return (out);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	i = ft_nmbr_dgts(nb);
	while (i > 1)
	{
		c = nb / ft_degree_ten(--i) + '0';
		write(1, &c, 1);
		nb = nb % ft_degree_ten(i);
	}
	c = nb + '0';
	write(1, &c, 1);
}
