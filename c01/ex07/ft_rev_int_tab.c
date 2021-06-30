/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 22:38:43 by pclark            #+#    #+#             */
/*   Updated: 2021/06/11 23:17:13 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		cur[size];
	int		*ptr[size];
	int		subst[size];
	int		*pts[size];

	ptr[0] = cur;
	pts[0] = subst;
	i = 0;
	cur[0] = tab;
	while (size > 0)
	{
		size--;
		subst[i] = cur[size];
		i++;
	}
	tab = subst;
}
