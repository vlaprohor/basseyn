#include <unistd.h>
#include <fcntl.h>

void	failure(int	i)
{
	if (i == 1)
		write(2, "File name missing.\n", 19);
	if (i > 2)
		write(2, "Too many arguments.\n", 20);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	out[65000];

	if (argc !=  2)
	{
		failure(argc);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);	
	}
	ret = read(fd, out, 1);
	while (ret)
	{
		out[ret] = '\0';
		write(1, &out, fd);
		ret = read(fd, out, 1);
	}
	close(fd);
	return (0);
}
