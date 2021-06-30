#include "ft.h"

void	bsq(const char *file)
{
	t_map	*map;
	t_ans	*answer;

	map = read_input(file);
	if (map)
		answer = fill_answer(map);
	else
	{
		ft_putstr("map error\n");
		return ;
	}
	print_answer(map, answer);
	free_map(map);
	free(answer);
}

void	bsq_stdin(void)
{
	t_map	*map;
	t_ans	*answer;

	map = read_std();
	if (map)
		answer = fill_answer(map);
	else
	{
		ft_putstr("map error\n");
		return ;
	}
	print_answer(map, answer);
	free_map(map);
	free(answer);
}
