#include "ft_all.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*make_dict(char *str);

int	main(int argc, char **argv)
{
	char	*dictionary;

	if (argc != 2 && argc != 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
	{
		dictionary = make_dict("numbers.dict");
		output_result(dictionary, argv[1]);
	}
	else
	{
		if (dict_check(argv[1]))
		{
			dictionary = make_dict(argv[1]);
			output_result(dictionary, argv[2]);
		}
		else
		{
			dict_failure();
			return (0);
		}
	}
	printf("%s\n", dictionary);
	free(dictionary);
	return (0);
}
