/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:27:12 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/21 14:57:06 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int more;
	int less;

	i = -1;
	more = 0;
	less = 0;
	if (length == 1)
		return (1);
	while (++i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			more++;
		if (f(tab[i], tab[i + 1]) < 0)
			less++;
	}
	if (more == 0 && less != 0)
		return (1);
	if (less == 0 && more != 0)
		return (1);
	if (less == 0 && more == 0)
		return (1);
	return (0);
}
