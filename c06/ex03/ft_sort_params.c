#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '0')
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

	i = size - 1;
	while (i > 1)
	{
		j = 1;
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

int	main(int argc, char **argv)
{
	int		i;
	int		n;

	(void) argc;
	(void) argv;
	sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		n = 0;
		while (argv[i][n] != '\0')
			n++;
		write(1, argv[i], n);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
