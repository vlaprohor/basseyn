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

	while (size > 0)
	{
		i = 0;
		j = 1;
		while (j <= size)
		{
			if (ft_strcmp (sorting[i], sorting [j]) > 0)
			{
				temp = sorting[i];
				sorting[i] = sorting[j];
				sorting[j] = temp;
			}
			i++;
			j++;
		}
		size--;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		n;

	(void) argc;
	(void) argv;
	sort(argv);
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
}
