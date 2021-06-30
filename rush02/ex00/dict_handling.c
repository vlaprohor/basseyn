#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_all.h"

void	dict_failure(void)
{
	write(1, "lol", 3);
}

void	fill_dict(char *dict, char *str)
{
	int		fd;
	int		ret;
	int		index;
	char	buf[1];

	fd = open(str, O_RDONLY);
	ret = read(fd, buf, 1);
	index = 0;
	while (ret)
	{
		dict[index++] = *buf;
		ret = read(fd, buf, 1);
	}
	dict[index] = '\0';
}

char	*make_dict(char *str)
{
	int		fd;
	int		chars;
	int		ret;
	char	*result;
	char	buf[1];

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		dict_failure();
		return (0);
	}
	chars = 0;
	ret = read(fd, buf, 1);
	while (ret)
	{
		chars++;
		ret = read(fd, buf, 1);
	}
	close(fd);
	result = malloc(sizeof (*result) * (chars + 1));
	fill_dict(result, str);
	return (result);
}

int	dict_check(char *dict)
{
	int		i;
	int		j;
	char	*ex;

	ex = make_dict("our_cool_dict_for_checks");
	i = 0;
	j = 0;
	while (ex[i] != '\0')
	{
		j = 0;
		while (!str_cmp(like_atoi(ex, &i), like_atoi(dict, &j)) && (dict[j] != '\n' || dict[j] != '\0'))
			j++;
		if (dict[j] == '\0')
			return (0);
		while (ex[i] != '\0' && ex[i] != '\n')
			i++;
	}
	return (1);
}
