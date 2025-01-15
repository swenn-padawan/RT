# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stetrel <stetrel@42angouleme.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 13:32:58 by stetrel           #+#    #+#              #
#    Updated: 2025/01/15 20:11:12 by stetrel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include pimp_makefile.mk

NAME	:= RayTracer

CC		:= cc

SRCS_DIR	:= srcs

BUILD_DIR	:= .build

CFLAGS	:= -Wall -Werror -Wextra -g

IFLAGS	:=	-I ./includes

SRCS	:= main.c \
		   hashmap/hashmap_create.c \

SRCS	:= $(addprefix $(SRCS_DIR)/, $(SRCS))

OBJS		:= $(addprefix $(BUILD_DIR)/, $(SRCS:%.c=%.o))

RM		:= rm -f

DIR_UP	= mkdir -p $(@D)

MAKEFLAGS	+= --no-print-directory

###############################################################################

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@

$(BUILD_DIR)/%.o:%.c
	@$(DIR_UP)
	@$(call run_and_test, $(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<)

clean:
	@$(RM) $(OBJS_DIR)
	@$(RM) $(OBJS)
	@echo "$(RED)objs removed$(RESET)"

fclean: clean
	@echo "$(RED)$(NAME) removed"
	@$(RM) $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all


