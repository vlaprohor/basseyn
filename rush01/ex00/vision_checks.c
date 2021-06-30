int	check_lr(int sols[], int inpt[], int i, int d)
{
	int	max;
	int	visioned;
	int	n;

	max = 0;
	visioned = 0;
	n = i / 4 * 4;
	while (n < i)
	{
		if (sols[n] > max)
		{
			max = sols[n];
			visioned++;
		}
		n++;
	}
	if (d > max)
		visioned++;
	if (visioned > inpt[8 + i / 4])
		return (0);
	if (i % 4 == 3 && visioned != inpt[8 + i / 4])
		return (0);
	return (1);
}

int	check_ud(int sols[], int inpt[], int i, int d)
{
	int	max;
	int	visioned;
	int	n;

	max = 0;
	visioned = 0;
	n = i % 4;
	while (n < i)
	{
		if (sols[n] > max)
		{
			max = sols[n];
			visioned++;
		}
		n += 4;
	}
	if (d > max)
		visioned++;
	if (visioned > inpt[i % 4])
		return (0);
	if (i / 4 == 3 && visioned != inpt[i % 4])
		return (0);
	return (1);
}

int	check_rl(int sols[], int inpt[], int i, int d)
{
	int	max;
	int	visioned;
	int	n;

	max = d;
	visioned = 1;
	n = i / 4 * 4 + 3;
	if (i == n)
	{
		while (n-- > i - 3)
		{
			if (sols[n] > max)
			{
				max = sols[n];
				visioned++;
			}
		}
		if (visioned != inpt[12 + i / 4])
			return (0);
	}
	return (1);
}

int	check_du(int sols[], int inpt[], int i, int d)
{
	int	max;
	int	visioned;
	int	n;

	max = d;
	visioned = 1;
	n = i % 4 + 12;
	if (i == n)
	{
		while (n > i % 4)
		{
			n -= 4;
			if (sols[n] > max)
			{
				max = sols[n];
				visioned++;
			}
		}
		if (visioned != inpt[4 + i % 4])
			return (0);
	}
	return (1);
}
