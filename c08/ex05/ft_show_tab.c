void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	write(1, &str, n);
	write(1, "\n", 1);
}

void	ft_putnmbr(int n)
{
	char	c;

	if (n > 9)
	{
		ft_putmbr(n / 10);
		ft_putmbr(n % 10);
	}
	c = n + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	ft_putstr(par.str);
	ft_putnmbr(par.size);
	write(1, "\n", 1);
	ft_putstr(par.copy);
}
