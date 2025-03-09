# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anvander < anvander@student.42.fr >        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/03 11:37:12 by anvander          #+#    #+#              #
#    Updated: 2025/03/09 15:36:39 by anvander         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

HEADER = -I ./includes
SRC_PATH = src/

SOURCES = 	main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp

SRC = $(addprefix $(SRC_PATH),$(SOURCES))

OBJ_PATH = obj/
OBJ = $(addprefix $(OBJ_PATH), $(SOURCES:.cpp=.o))

all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $@ $^

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp 
		$(CC) $(FLAGS) -c -o $@ $< $(HEADER)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean