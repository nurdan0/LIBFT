# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsahinog <nsahinog@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 12:19:18 by nsahinog          #+#    #+#              #
#    Updated: 2022/10/21 12:19:23 by nsahinog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = *.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc $(FLAG) -c $(SRC)
	@ar rc $(NAME) *.o
	@echo "\n\033[92m $@ built ✅\033[0m\n"
bonus:
	@gcc $(FLAG) -c $(BONUS)
	@ar rc $(NAME) *.o
	@echo "\n\033[92m $@ built ✅\033[0m\n"
clean:
	@/bin/rm -f  *.o
	@echo "\n\033[36m object files removed 👋\033[0m\n"
fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: fclean all

.PHONY: all bonus clean fclean re
