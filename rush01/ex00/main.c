#include <stdio.h>
int		check_lr(int sols[], int inpt[], int i, int d);
int		check_ud(int sols[], int inpt[], int i, int d);
int		check_rl(int sols[], int inpt[], int i, int d);
int		check_du(int sols[], int inpt[], int i, int d);
int		print_error(int i);
void	print_solution(int sols[]);
int		check_input(char *str);
int		*separate_input(char *str);
int		check_circs(int *inpt);

int	check_allowed(int i, int d, int sols[])
{
	int	n;

	n = 0;
	while (n < i)
	{
		if (n % 4 == i % 4 && sols[n] == d)
			return (0);
		if (n / 4 == i / 4 && sols[n] == d)
			return (0);
		n++;
	}
	return (1);
}

int	check_vision(int sols[], int inpt[], int i, int d)
{
	if (!check_lr(sols, inpt, i, d))
		return (0);
	if (!check_rl(sols, inpt, i, d))
		return (0);
	if (!check_ud(sols, inpt, i, d))
		return (0);
	if (!check_du(sols, inpt, i, d))
		return (0);
	return (1);
}

int	find_solution(int sols[], int inpt[], int place)
{
	int	n;
	int	done;

	if (place == 16)
	{
		print_solution(sols);
		return (1);
	}
	n = 1;
	while (n < 5)
	{
		if (check_allowed(place, n, sols))
		{
			if (check_vision(sols, inpt, place, n))
			{
				sols[place] = n;
				done = find_solution(sols, inpt, place + 1);
				if (done)
					return (1);
			}
		}
		n++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	*inpt;
	int	sols[16];
	int	result;

	if (argc != 2)
		return (print_error(0));
	if (!check_input(argv[1]))
		return (print_error(0));
	inpt = separate_input(argv[1]);
	if (!check_circs(inpt))
		return (print_error(0));
	result = find_solution(sols, inpt, 0);
	if (!result)
		return (print_error(0));
	return (0);
}
