void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		size;
	char	*temp;
	int		j;

	size = 0;
	while (tab[size] != 0)
		size++;
	size--;
	while (size > 0)
	{
		j = 0;
		while (j < size)
		{
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		size--;
	}
}
