/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:42:13 by pclark            #+#    #+#             */
/*   Updated: 2021/06/11 23:29:49 by pclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	dv;
	int	md;
	int	*ptd;
	int	*ptm;

	dv = a / b;
	md = a % b;
	ptd = &dv;
	ptm = &md;
	*div = *ptd;
	*mod = *ptm;
}
