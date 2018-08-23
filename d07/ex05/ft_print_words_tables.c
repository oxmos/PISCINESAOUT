/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 21:14:47 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/16 16:29:17 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	**ft_split_whitespaces(char *str);

void	ft_putchar(char c);

void	putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_words_tables(char **tab)
{
int i;

	while (*tab)
	{
		putstr(*tab);
		ft_putchar('\n');
		tab++;
	}
}
