# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eprzybyl <eprzybyl@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 15:33:49 by eprzybyl          #+#    #+#              #
#    Updated: 2023/10/29 12:38:55 by eprzybyl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#library name:

NAME = libft.a

#compiler:

CC = gcc

#flags:

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h
#remove (be careful here, its forced!):

RM = rm -f

#creates, modifies, and extracts from archives

AR = ar rcs

#basic source files:

SRC1=$(wildcard *.c)

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

#cleaning:

clean:
	$(RM) $(OBJ1)

fclean: clean
	$(RM) $(NAME)

#cleaning everything and REbuilding the project:

re: fclean all


