int	ft_iterative_factorial(int nb)
{
	int	iterator;
	int	result;

	if (nb < 0)
		return (0);
	iterator = 1;
	result = 1;
	while (iterator <= nb)
	{
		result *= iterator;
		iterator++;
	}
	return (result);
}
