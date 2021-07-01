# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomez-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/23 11:01:24 by egomez-a          #+#    #+#              #
#    Updated: 2021/07/01 13:01:31 by egomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	push_swap
LIBFT		= 	libft.a
LIBFT_DIR	=	libft/
OBJ_DIR		=	obj/
SRCS_DIR	=	sources/
SRCS 		=	push_swap.c \
				commands.c \
				order.c \ 

SOURCES		= 	$(addprefix $(SRCS_DIR), $(SRCS))
OBJS		= 	$(SOURCES:.c=.o)

CFLAGS 		= 	-Wall -Wextra -Werror -g -03
LFLAGS		= 	-I includes/
CC 			= 	gcc
RM 			= 	rm -rf
AR			=	ar rc
NORM		= 	/usr/bin/norminette



all: 
	$(OBJ_DIR) $(NAME)
$(OBJ_DIR):
		@echo "--- Compiling LIBFT.A ---"
		make -C $(LIBFT_DIR)
		@echo "--- DONE ---$(RESET)"
		

$(PUSH_NAME): $(PUSH_OBJ)
	@make -C $(LIB_DIR) --silent
	@gcc -o $(PUSH_NAME) $(PUSH_OBJ) -L $(LIB_DIR) -lft
	@echo "##### push_swap compiling finished! #####"
	@echo "=========== Compilando $(NAME) ==========="
	$(CC) $(CFLAGS) $(LFLAGS) $(LIB_DIR)$(LIBFT) -o $(NAME) $(OBJS)
	@echo "=========== DONE ==========$(RESET)"

test: re
		@echo "=========== Compilando TEST ==========="
		@$(CC) $(FLAGS) -c sources/main.c -o obj/main.o
		@echo "=========== DONE ===========$(RESET)"
clean:
		@echo "========== CLEAN =========="
		$(RM) $(OBJ_DIR)
		$(RM) $(OBJS)
		make -C $(LIB_DIR) clean
		@echo "=========== DONE ===========$(RESET)"
fclean: clean
		@echo "========== FCLEAN =========="
		$(RM) $(NAME)
		make -C $(LIB_DIR) fclean
		@echo "=========== DONE ===========$(RESET)"
bonus: all
re: fclean all
norm: 
		$(NORM) $(SRC);
.PHONY: all clean fclean re