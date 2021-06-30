/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:37:13 by pclark            #+#    #+#             */
/*   Updated: 2021/06/10 14:32:30 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_number_digits (int n)
{
	int	digits;
	int	temporal;

	if (n == 0)
		return (1);
	else
	{
		digits = 0;
		while (n > 0)
		{
			digits ++;
			temporal = n / 10;
			n = temporal;
		}
		return (digits);
	}		
}

void	ft_print_digit(int num)
{
	int		subst;
	char	c;

	while (num > 9)
	{
		subst = num / 10;
		num = subst;
	}
	c = num + '0';
	write (1, &c, 1);
}

int	ft_divider(int num)
{
	int	div;
	int	divtemp;

	div = 10;
	while (num > 1)
	{
		divtemp = div;
		div = divtemp * 10;
		num--;
	}
	return (div);
}

void	ft_putnbr(int nb)
{
	int	temp1;
	int	temp2;
	int	ndigits;
	int	div;

	if (nb < 0)
	{
		write (1, "-", 1);
		temp1 = nb;
		nb = temp1 * -1;
	}
	ndigits = ft_number_digits(nb);
	while (ndigits > 0)
	{
		div = ft_divider(ndigits);
		ft_print_digit(nb);
		temp2 = nb % div;
		nb = temp2;
		ndigits--;
	}	
}
