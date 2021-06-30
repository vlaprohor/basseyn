#include <unistd.h>

int	print_error(int i)
{
	write(1, "Error\n", 6);
	return (i);
}

void	write_three(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
	write(1, " ", 1);
}

void	write_last(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
}

void	print_solution(int sols[])
{
	int		n;

	n = 0;
	while (n < 16)
	{
		if (n % 4 != 3)
			write_three(sols[n]);
		else
			write_last(sols[n]);
		n++;
	}
}
