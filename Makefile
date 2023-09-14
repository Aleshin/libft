CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

LIB = ar rc

NAME = libft.a
HEADER = libft.h

SRCS =	ft_atoi.c ft_strlen.c ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c

OBJS = $(SRCS:.c=.o)

# Metodo Implicito
%.o:%.c 	$(HEADER) Makefile
			$(CC) $(CFLAGS) -c $< -o $@

all: 		$(NAME)

$(NAME): 	$(OBJS)
			$(LIB) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
