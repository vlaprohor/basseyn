#include <unistd.h>
int		ft_atoi(char *str);
int		get_operator(char *str);
void	del(int i, int j);
void	fail(int i, int j);
void	ft_putnbr(long long int i);
void	ostatok(int i, int j);

void	plus(int i, int j)
{
	long long int	s;

	s = (long long int)i + (long long int)j;
	ft_putnbr(s);
}

void	minus(int i, int j)
{
	long long int	s;

	s = i - j;
	ft_putnbr(s);
}

void	multiple(int i, int j)
{
	long long int	s;

	s = (long long int)i * (long long int)j;
	ft_putnbr(s);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		n;
	void	(*operation[6])(int, int);

	if (argc != 4)
		return (0);
	operation[0] = &fail;
	operation[1] = &plus;
	operation[2] = &minus;
	operation[3] = &del;
	operation[4] = &ostatok;
	operation[5] = &multiple;
	i = ft_atoi(argv[1]);
	j = ft_atoi(argv[3]);
	n = get_operator(argv[2]);
	(*operation[n])(i, j);
	write(1, "\n", 1);
	return (0);
}
