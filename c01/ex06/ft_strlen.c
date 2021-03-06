/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 22:30:13 by pclark            #+#    #+#             */
/*   Updated: 2021/06/11 23:33:01 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*out;
	int		i;

	out = str;
	i = 0;
	while (out[i] != '\0')
	{
		i++;
	}
	return (i);
}
