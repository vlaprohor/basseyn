/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 21:34:59 by pclark            #+#    #+#             */
/*   Updated: 2021/06/12 21:57:59 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 & str[i] < 91) | (str[i] > 96 & str[i] < 123))
			counter++;
		i++;
	}
	if (str[counter] == '\0')
		return (1);
	else
		return (0);
}