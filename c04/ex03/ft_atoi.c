int	ft_isspace(char str)
{
	if (str == '\t' || str == '\n' || str == '\v')
		return (1);
	else if (str == '\f' || str == '\r' || str == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	x;

	x = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (str[i] > 47 && str[i] < 58)
	{
		while (str[i] > 47 && str [i] < 58)
		{
			x = x * 10 + str[i] - '0';
			i++;
		}
		return (x * sign);
	}
	return (0);
}
