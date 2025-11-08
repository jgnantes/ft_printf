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
INCLUDES = -I$(LIB_PATH)

all: $(NAME)

$(LIB):
	make bonus -C $(LIB_DIR)
	mv $(LIB_PATH) .

$(LIB_OBJS): $(LIB)
	$(AR) $(LIB_OBJS) $(LIB)

$(NAME): $(OBJS) $(LIB)
	ar x $(LIB)
	$(AR) $(NAME) $(OBJS) *.o 
	rm -f *.o

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRCS) -c

clean:
	rm -f $(OBJS)
	make clean -C $(LIB_DIR)

fclean: clean
	rm -f $(NAME) $(LIB)
	make fclean -C $(LIB_DIR)

re: fclean all

.PHONY: all clean fclean re