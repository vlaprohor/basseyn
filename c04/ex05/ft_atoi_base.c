int	ft_base_check(char *base)
{
	int	i;
	int	n;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
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
	return (n);
}

int	ft_isspace(char str)
{
	if (str == '\t' || str == '\n' || str == '\v')
		return (1);
	else if (str == '\f' || str == '\r' || str == ' ')
		return (1);
	else
		return (0);
}

int	ft_isin(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (i + 1);
		i++;
	}
	return (0);
}

int	ft_turn_to_nmbr(char *str, char *base, int bs, int i)
{
	int	x;

	x = 0;
	if (ft_isin(str[i], base))
	{
		while (ft_isin(str[i], base))
		{			
			x = x * bs + ft_isin(str[i], base) - 1;
			i++;
		}
		return (x);
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int			bs;
	int			sign;
	int			i;

	bs = ft_base_check(base);
	if (bs)
	{
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
		return (ft_turn_to_nmbr(str, base, bs, i) * sign);
	}
	return (0);
}
