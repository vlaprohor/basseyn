#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	(void) argc;
	(void) argv;
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
