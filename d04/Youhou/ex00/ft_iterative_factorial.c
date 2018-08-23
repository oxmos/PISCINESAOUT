/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 03:31:13 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/06 22:28:12 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = nb - 1;
	result = nb;
	if (nb < 0 || nb > 12)
		return (0);
	while (i > 1)
	{
		result = result * i;
		i--;
	}
	return (result);
}
