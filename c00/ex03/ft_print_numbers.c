/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 21:27:12 by pclark            #+#    #+#             */
/*   Updated: 2021/06/09 21:33:26 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_numbers(void)
{
	int		i;
	char	number;

	i = 0;
	number = '0';
	while (i < 10)
	{
		write (1, &number, 1);
		i++;
		number++;
	}
}
