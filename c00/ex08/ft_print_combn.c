/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 21:17:36 by pclark            #+#    #+#             */
/*   Updated: 2021/06/10 23:38:43 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_max(int n)
{
	int	temp;
	int	max;

	max = 10;
	while (n > 1)
	{
		temp = max * 10;
		max = temp;
		n--;
	}
	return (max);
}

void	ft_print_three(int n, int cur)
{
	char	c;

	if (n == 1)
	{
		c = cur + '0';
		write (1, &c, 1);
	}
	else if (n == 2 & cur / 10 < cur % 10)
	{
		c = cur / 10 + '0';
		write (1, &c, 1);
		c = cur % 10 + '0';
		write (1, &c, 1);
	}
	else if (cur / 100 < cur % 100 / 10 & cur % 100 / 10 < cur % 10)
	{
		c = cur / 100 + '0';
		write (1, &c, 1);
		c = cur % 100 / 10 + '0';
		write (1, &c, 1);
		c = cur % 10 + '0';
		write (1, &c, 1);
	}
}

void	ft_print_six(int n, int cur)
{
	int 	i1;
	int		i2;

	i2 = cur % 1000;
	i1 = cur / 1000;
	if (i2 / 100 < i2 % 100 / 10 & i2 % 100 / 10 < i2 % 10 & i1 % 10 < i2 / 100)
	{
		if (n == 4)
			ft_print_three(1, i1);
		else if (n == 5 & i1 / 10 < i1 % 10 & i1 % 10)
			ft_print_three(2, i1);
		else if (i1 / 100 < i1 / 10 % 10 & i1 / 10 % 10  < i1 % 10)	
			ft_print_three(3, i1);			
		ft_print_three(3, i2);
	}
}

void	ft_print_nine(int n, int cur)
{
	int	i1;
	int	i2;
	int	i3;
	int	i4;

	i1 = cur / 1000000;
	i2 = cur % 1000000;
	i3 = cur % 1000;
	i4 = i2 / 1000;
	if (i3 / 100 < i3 / 10 % 10 & i3 / 10 % 10 < i3 % 10 & i1 % 10 < i4 / 100)
	{
		if (i4 % 10 < i3 / 100 & i4 / 100 < i4 / 10 % 10 & i4 / 10 % 10 < i4 % 10) 
		{
			if (n == 7)
				ft_print_three(1, i1);
			else if (n == 8 & i1 / 10 < i1 % 10)
				ft_print_three(2, i1);
			else if (i1 / 100 < i1 / 10 % 10 & i1 / 10 % 10 < i1 % 10)
				ft_print_three(3, i1);
			ft_print_six(6, i2);
		}
	}
}

void	ft_print_combn(int n)
{
	int	min;
	int	max;

	max = ft_max(n);
	min = max / 100;
	while (min < max)
	{
		if (n < 4)
			ft_print_three (n, min);
		else if (n < 7)
			ft_print_six (n, min);
		else
			ft_print_nine (n, min);
		min++;
	}
}
