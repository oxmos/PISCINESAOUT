/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:46:41 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/17 00:41:29 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_catargs(char **argv, int i, int j, int k, char *str)
{
	i = 0;
	j = 0;
	k = 0;
	while (argv[++i])
	{
		j = 0;
		while (argv[i][j])
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	int length;
	int i;
	int j;
	int k;
	char *str;

	length = 0;
	i = 0;
	j = 0;
	k = 0;
	argc = 0;
	while (argv[++i])
		length += ft_len(argv[i] + 1);
	if (!(str = malloc(sizeof(*str) * length)))
		return (0);
	ft_catargs(argv, i, j, k, str);
	return (str);
}
