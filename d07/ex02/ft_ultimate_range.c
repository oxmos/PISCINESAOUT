/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 14:53:47 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/16 16:10:23 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;

	i = 0;
	len = max - min;
	if (len <= 0)
		return (0);
	*range = malloc(sizeof(**range) * (len + 1));
	while (i <= len)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
