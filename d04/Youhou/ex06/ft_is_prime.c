/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 03:22:10 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/07 03:53:28 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i * i < nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (i);
}


int		ft_is_prime(int nb)
{
	int j;

	i = ft_sqrt(nb);
	if (nb < 0)
		return (0);
	if (nb == 2)
		return (1);
	while (j >= 2)
	{
		if (nb % j == 0)
			return(0);
		j--;
	}
	return(1);
}
