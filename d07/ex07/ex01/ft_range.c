/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 13:26:38 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/15 21:22:31 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int len;

	len = max - min;
	if (len <= 0)
		return (0);
	tab = (int*)malloc(sizeof(int) * (len + 1));
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
