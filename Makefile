CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS_CLIENT = client.c

SRCS_SERVER = server.c

OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

OBJS_SERVER = $(SRCS_SERVER:.c=.o)

LIBFT_DIR = libft

LIBFT_A = $(LIBFT_DIR)/libft.a

NAME_CLIENT = client

NAME_SERVER = server


all: $(LIBFT_A) $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_SERVER) : $(OBJS_SERVER)
	$(CC) $(CFLAGS) -o $(NAME_SERVER) $(OBJS_SERVER) -L $(LIBFT_DIR) -lft

$(NAME_CLIENT) : $(OBJS_CLIENT)
	$(CC) $(CFLAGS) -o $(NAME_CLIENT) $(OBJS_CLIENT) -L $(LIBFT_DIR) -lft

$(LIBFT_A):
	make -C $(LIBFT_DIR)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	rm -rf $(OBJS_CLIENT) $(OBJS_SERVER)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -rf $(NAME_CLIENT) $(NAME_SERVER)

re: fclean all

.PHONY: all clean fclean re