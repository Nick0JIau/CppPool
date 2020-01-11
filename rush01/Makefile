NAME = ft_gkrellm

TEMPLATE = srcs/main.cpp srcs/CPUModule.cpp srcs/DateTimeModule.cpp srcs/HostUserModule.cpp  \
srcs/ModuleHandler.cpp srcs/NetworkModule.cpp srcs/OSInfoModule.cpp srcs/RAMModule.cpp

COMPILED = $(TEMPLATE:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(COMPILED)
	clang++ $(FLAGS) -std=c++98  $(COMPILED) -lncurses -lmlx  -framework OpenGL -framework Appkit -o $(NAME)

clean:
	@rm -rf srcs/*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all