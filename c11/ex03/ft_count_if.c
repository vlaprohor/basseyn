int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
			n++;
		i++;
	}
	return (n);
}
