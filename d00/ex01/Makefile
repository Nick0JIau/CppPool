# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntrusevi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 11:18:51 by ntrusevi          #+#    #+#              #
#    Updated: 2019/09/30 11:29:41 by ntrusevi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= phonebook.cpp Contact.cpp

NAME	= phonebook

OBJ		= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Wextra -Werror

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
		clang++ $(FLAGS) $(OBJ) -o $(NAME)
		echo '\033[32m[ ✔ ]' "$(NAME) created" '\033[0m'

clean:
		rm -rf $(OBJ)
		echo '\033[31m[ × ]' "$(OBJ) removed" '\033[0m'

fclean: clean
		rm -f $(NAME)
		echo '\033[31m[ × ]' "$(NAME) removed" '\033[0m'

re: fclean all

.PHONY: all clean fclean re
