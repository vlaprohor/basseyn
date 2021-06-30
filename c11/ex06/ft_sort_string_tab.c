int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

void	sort(int size, char **sorting)
{
	char	*temp;
	int		i;
	int		j;

	i = size;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (ft_strcmp (sorting[j], sorting [j + 1]) > 0)
			{
				temp = sorting[j];
				sorting[j] = sorting[j + 1];
				sorting[j + 1] = temp;
			}
			j++;
		}
		i--;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	size;

	size = 0;
	while (tab[size] != 0)
		size++;
	sort(size - 1, tab);
}
