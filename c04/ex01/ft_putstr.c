#include <unistd.h>
void	ft_putstr(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
	{
		write(1, &str[iterator], 1);
		iterator++;
	}
}
