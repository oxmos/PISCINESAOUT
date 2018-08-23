/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 18:57:26 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/04 20:41:43 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		rdiv;
	int		rmod;

	rdiv = *a / *b;
	rmod = *a % *b;
	*a = rdiv;
	*b = rmod;
}
