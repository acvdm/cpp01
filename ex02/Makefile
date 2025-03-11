# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvander <anvander@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 09:58:17 by anvander          #+#    #+#              #
#    Updated: 2025/03/11 17:47:21 by anvander         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = HITHISISBRAIN

SRC_PATH = src/

SOURCES = main.cpp

SRC = $(addprefix $(SRC_PATH), $(SOURCES))

OBJ_PATH = obj/
OBJ = $(addprefix $(OBJ_PATH), $(SOURCES:.cpp=.o))

all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $^

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean