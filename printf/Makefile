LIBRARY = libftprintf.a
CC = gcc -Werror -Wall -Wextra
SRC = printf.c
OBJ = $(SRC: .o=.o)
RM = rm -f

all: $(LIBRARY)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(NAME)

re: fclean all