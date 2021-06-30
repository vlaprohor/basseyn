/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 22:00:00 by pclark            #+#    #+#             */
/*   Updated: 2021/06/12 22:01:31 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 & str[i] < 123)
			counter++;
		i++;
	}
	if (str[counter] == '\0')
		return (1);
	else
		return (0);
}
