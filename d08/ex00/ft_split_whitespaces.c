/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 21:02:24 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/19 14:07:08 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define WS(c) (c == '\n' || c == '\t' || c == ' ' || c == '\0')

int		only_char_len(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (!WS(*str) && WS(*(str + 1)))
			i++;
		str++;
	}
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		len;
	int		i;
	int		j;

	if (!(tab = malloc(sizeof(char*) * (only_char_len(str) + 1))))
		return (0);
	i = 0;
	while (*str)
	{
		while (WS(*str) && *str)
			str++;
		if (*str == '\0')
			break ;
		len = only_char_len(str);
		tab[i] = malloc(sizeof(char*) * len + 1);
		j = 0;
		while (!(WS(*str)))
			tab[i][j++] = *str++;
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
