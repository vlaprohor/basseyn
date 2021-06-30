int	ft_is_prime(int nb)
{
	int	check;

	if (nb < 2)
		return (0);
	check = 2;
	while (check * check <= nb)
	{
		if (nb % check == 0)
			return (0);
		check++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	check;

	check = nb;
	while (!ft_is_prime(check))
		check++;
	return (check);
}
