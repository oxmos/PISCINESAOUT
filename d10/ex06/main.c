/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 11:20:21 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/21 17:06:10 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_op.h"

int		ft_do_op(char op, int a, int b)
{
	t_calculs	calculs[5];
	int			i;

	calculs[0].op = '+';
	calculs[0].f = ft_add;
	calculs[1].op = '-';
	calculs[1].f = ft_sub;
	calculs[2].op = '*';
	calculs[2].f = ft_mul;
	calculs[3].op = '/';
	calculs[3].f = ft_div;
	calculs[4].op = '%';
	calculs[4].f = ft_mod;
	i = -1;
	while (++i < 5)
		if (op == calculs[i].op)
			return (calculs[i].f(a, b));
	return (0);
}

int		check(char op, int b)
{
	if (op == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (op == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (check(argv[2][0], ft_atoi(argv[3])))
		{
			ft_putnbr(ft_do_op(argv[2][0], ft_atoi(argv[1]), ft_atoi(argv[3])));
			ft_putchar('\n');
		}
	}
	return (0);
}
