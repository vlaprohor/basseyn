int	ft_sqrt(int nb)
{
	int	check;

	check = 0;
	while (check * check <= nb && check < 46341)
	{
		if (check * check == nb)
			return (check);
		check++;
	}
	return (0);
}
