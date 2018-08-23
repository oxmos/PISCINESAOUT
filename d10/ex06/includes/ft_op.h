/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 10:31:32 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/21 17:06:12 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_H
# define FT_OP_H
# include <unistd.h>

typedef struct	s_calculs
{
	char	op;
	int		(*f)(int a, int b);
}				t_calculs;

int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_atoi(char *str);
int				ft_do_op(char op, int a, int b);
void			ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nbr);
#endif
