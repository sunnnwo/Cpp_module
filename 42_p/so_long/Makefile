NAME		= so_long

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
ar			= ar rcs
MLX_FLAGS	= -L./mlx -lmlx -framework OpenGL -framework AppKit
RM			= rm -f

MLX_DIR		= ./mlx/

SRCS		= GNL/get_next_line.c draw_map.c\
			GNL/get_next_line_utils.c set_param.c copy_map.c\
			check_map.c so_long.c exit_game.c get_key.c move.c ft_itoa.c\

OBJS		=	$(SRCS:.c=.o)

%.o : %.c
		${CC} ${CFLAGS} -c -o $@ $<

$(NAME):	$(OBJS)
			make -C $(MLX_DIR)
			$(CC) -o $(NAME) $(OBJS) -L $(MLX_DIR) $(MLX_FLAGS)

all: 		$(NAME)

clean:
			make -C $(MLX_DIR) clean
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			clean all

PHONY:		all clean fclean re