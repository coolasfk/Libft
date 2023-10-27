# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 15:33:49 by eprzybyl          #+#    #+#              #
#    Updated: 2023/10/27 18:56:06 by eprzybyl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#library name:

NAME = Libft.a

#compiler:

CC = gcc

#flags:

FLAGS = -Wall -Wextra -Werror -I../libft -MMD -MP

#remove (be careful here, its forced!):

RM = rm -rf

#creates, modifies, and extracts from archives

AR = ar rcs

#basic source files:

BASICSRC = src
SRC1=$(wildcard $(BASICSRC)/*.c)

#object files .o

OBJ1= $(SRC1:.c=.o)

#makes sure those names are reserved for makefile:

.PHONY: all clean fclean re

#Rules to create the library

#default rule:

all: $(NAME)

#Builds the static library from object files:

$(NAME): $(OBJ1)
	$(AR) $(NAME) $(OBJ1)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

#auto-generating dependencies in case I change headers:

DEPS = $(OBJ1:.o=.d)

#cleaning:

clean:
	$(RM) $(OBJ1)

fclean: clean
	$(RM) $(NAME)

#cleaning everything and REbuilding the project:

re: fclean all

#include auto-generated dependency files

-include $(DEPS)

#run help to view the commands:
