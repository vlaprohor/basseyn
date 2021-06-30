/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 21:25:01 by pclark            #+#    #+#             */
/*   Updated: 2021/06/11 22:26:48 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char *str)
{
	char	*out;
	int		i;

	out = str;
	i = 0;
	while (out[i] != '\0')
	{
		write(1, &out[i], 1);
		i++;
	}
}
