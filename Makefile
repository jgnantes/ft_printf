NAME = libftprintf.a
SRCS = ft_printf.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

OBJS = $(SRCS:.c=.o)
LIB = libft.a
LIB_DIR = ./includes/
LIB_PATH = $(LIB_DIR)$(LIB)
INCLUDES = -I$(LIB_DIR)

all: $(NAME)

$(NAME): $(OBJS) $(LIB_PATH)
	cp $(LIB_PATH) $(NAME)
	$(AR) $(NAME) $(OBJS)

$(LIB_PATH):
	make bonus -C $(LIB_DIR)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCLUDES) -c $(SRCS)

clean:
	$(RM) $(OBJS)
	make clean -C $(LIB_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIB_DIR)

re: fclean all

.PHONY: all clean fclean re