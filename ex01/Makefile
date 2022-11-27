NAME	=	ex01

CC	=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC	=	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp

HEADER	=	Zombie.hpp

OBJ_DIR	=	objs
OBJ	=	$(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all:	$(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $@

clean:
	rm -rf $(OBJ_DIR)

fclean:	clean
	rm -f $(NAME)

re: fclean all

test:	all
	./$(NAME)