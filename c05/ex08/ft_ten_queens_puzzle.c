//#include <stdio.h>
#include <unistd.h>

void	ft_print_solution(int sols[])
{
	char	c;
	int		i;

	i = 0;
	while (i < 10)
	{
		c = sols[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check_line(int sols[], int n, int line)
{
	int	i;

	i = 0;
	while (i < line)
	{
		if (sols[i] == n)
			return (0);
		i++;
	}
	return (1);
}

int	check_diag(int sols[], int n, int line)
{
	int	i;

	i = 0;
	while (i < line)
	{
		if ((sols[i] - i == n - line) || (sols[i] + i == n + line))
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_solution(int sols[], int line)
{
	int	n;
	int	solutions;

	if (line == 10)
	{
		ft_print_solution(sols);
		return (1);
	}
	solutions = 0;
	n = 0;
	while (n < 10)
	{
		if (check_line(sols, n, line))
		{
			if (check_diag(sols, n, line))
			{
				sols[line] = n;
				solutions += ft_is_solution(sols, line + 1);
			}
		}
		n++;
	}
	return (solutions);
}

int	ft_ten_queens_puzzle(void)
{
	int	sols[10];
	int	solutions;

	solutions = ft_is_solution(sols, 0);
	return (solutions);
}
/*
int main()
{
	int i;

	i = ft_ten_queens_puzzle();
	printf("%d\n", i);	
}*/
