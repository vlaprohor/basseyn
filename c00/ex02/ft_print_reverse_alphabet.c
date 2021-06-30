/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 21:19:44 by pclark            #+#    #+#             */
/*   Updated: 2021/06/09 21:24:16 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	letter;

	i = 0;
	letter = 'z';
	while (i < 26)
	{
		write (1, &letter, 1);
		i++;
		letter--;
	}
}
