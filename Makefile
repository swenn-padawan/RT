# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 18:41:07 by stetrel           #+#    #+#              #
#    Updated: 2025/01/19 15:02:13 by stetrel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = RT

CC 		:= cc

FLAGS 	:= -Wall -Wextra -Werror -g

BUILD	:=	.build

LIBMLX_PATH = ./Lib/Macro

LIBFT_PATH = ./Lib/Libft

SRCS 	:= 	main.c \
			hook/key_hook.c \
			hook/window_hook.c \
			parsing/parsing.c \
			parsing/error.c \

SRCS_DIR	:= srcs

SRCS		:= $(addprefix $(SRCS_DIR)/, $(SRCS))

OBJS = $(addprefix $(BUILD)/, $(SRCS:%.c=%.o))

DIR_UP	=	mkdir -p $(@D)

MAKEFLAGS	+= --no-print-directory


all: $(NAME)

$(NAME): $(LIBMLX_PATH)/libmlx.so  $(LIBFT_PATH)/libft.a $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) $(LIBFT_PATH)/libft.a $(LIBMLX_PATH)/libmlx.so -lSDL2 -lm -o $(NAME)

$(LIBMLX_PATH)/libmlx.so:
	@make -C $(LIBMLX_PATH) -s -j
	
$(LIBFT_PATH)/libft.a:
	@make -C $(LIBFT_PATH)

$(BUILD)/%.o: %.c
	@$(DIR_UP)
	@$(CC) $(FLAGS) -I./includes -o $@ -c $<

clean:
	@make fclean -C $(LIBFT_PATH) -s
	@rm -rf $(OBJ_DIR)

fclean: clean
	@make fclean -C $(LIBMLX_PATH) -s
	@rm -f $(NAME)

re: clean all

remake: fclean all

.PHONY: all clean fclean re
