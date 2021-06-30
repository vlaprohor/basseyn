/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 20:23:59 by pclark            #+#    #+#             */
/*   Updated: 2021/06/12 21:13:23 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	iterator;
	int	subs;

	subs = n;
	iterator = 0;
	while (iterator < subs & src[iterator] != '\0')
	{
		dest[iterator] = src[iterator];
		iterator++;
	}
	while (iterator < subs)
	{
		dest[iterator] = '\0';
		iterator++;
	}
	dest[iterator] = '\0';
	return (dest);
}
