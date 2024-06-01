# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 15:49:40 by adrgutie          #+#    #+#              #
#    Updated: 2024/05/31 16:58:32 by adrgutie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a
CC 		= cc
CFLAGS 	= -Wall -Wextra -Werror
RM 		= rm -f
SRCS 	= $(wildcard f*.c)
OBJS 	= $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	make -C libft
	cp ./libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)
	make fclean -C libft
fclean: clean
	$(RM) $(NAME)
re: fclean all
bonus: all
.PHONY : all clean fclean re