/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:42:17 by pclark            #+#    #+#             */
/*   Updated: 2021/06/10 12:22:36 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void 	ft_print_number(int n)
{
	char	c;

	c = n / 10 + '0';
	write (1, &c, 1);
	c = n % 10 + '0';
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;

	n1 = -1;
	n2 = 1;
	write (1, "00 01", 5);
	while (n1 < 99)
	{
		n1++;
		while (n2 < 99)
		{
			n2++;
			if (n2 > n1)
			{
				write (1, ", ", 2);
				ft_print_number(n1);
				write (1, " ", 1);
				ft_print_number(n2);
			}
		}
		n2 = 0;
	}
	write (1, "\n", 1);
}
