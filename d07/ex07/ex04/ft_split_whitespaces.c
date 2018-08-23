/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 21:02:24 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/15 21:23:42 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define ws(c) (c == '\n' || c == '\t' || c == ' ' || c == '\0')

int		only_char_len(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (!ws(*str) && ws(*(str + 1)))
			i++;
		str++;
	}
	return (i);
}

char **ft_split_whitespaces(char *str)
{
	char	**tab;
	int		len;
	int		i;
	int		j;

	if (!(tab = malloc(sizeof(char) * (only_char_len(str) + 1))))
		return (0);
	i = 0;
	while (*str)
	{
		while (ws(*str) && *str)
			str++;
		if (*str == '\0')
			return 0;
		len = 0;
		while (!(ws(str[len])))
			len++;
		tab[i] = malloc(len + 1);
		j = 0;
		while (!(ws(*str)))
			tab[i][j++] = *str++;
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
