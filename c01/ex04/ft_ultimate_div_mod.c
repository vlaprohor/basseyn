/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 21:04:20 by pclark            #+#    #+#             */
/*   Updated: 2021/06/11 23:32:00 by pclark           ###   ########.fr       */
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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;
	int	*ptx;
	int	*pty;

	ptx = &x;
	pty = &y;
	*ptx = *a;
	*pty = *b;
	ft_div_mod(x, y, a, b);
}
