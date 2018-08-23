#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 13:41:54 by jlarrieu          #+#    #+#              #
#    Updated: 2018/08/21 14:45:16 by jlarrieu         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	 =  do-op

SRCS	 =  main.c ./srcs/ft_atoi.c ./srcs/ft_putchar.c ./srcs/ft_putnbr.c ./srcs/ft_putstr.c ./srcs/operators.c

OBJS	 =  $(SRCS:.c=.o)

CFLAGS	 += -Werror -Wextra -Wall

CC 		 =	gcc

RM		 =  rm -f

CLEAN	 =	clean

all		 :
			@make $(NAME)

$(NAME)  :	$(OBJS)
			$(CC) -o $(NAME) $(OBJS)

clean 	 :	
			$(RM) $(OBJS)