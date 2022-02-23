# **************************************************************************** #
#       COMANDS                                                                #
# **************************************************************************** #
CC				=	gcc
RM				=	rm -rf
AR				=	ar rcs

# **************************************************************************** #
#       TITLE                                                                  #
# **************************************************************************** #
LIBFT_A			=	libft.a

# **************************************************************************** #
#       SOURCES                                                                #
# **************************************************************************** #
SRCS			=	ft_putstr_fd.c \
					ft_putnbr_fd.c \
					ft_putchar_fd.c \
					ft_itoa_base.c \
					ft_strlen.c \
					ft_strncmp.c \
					ft_itoa.c \
					ft_arraylen.c \
					ft_print_array.c \

GNL_SRCS		=	get_next_line/get_next_line.c \
					get_next_line/get_next_line_utils.c \
					get_next_line/get_next_line_nodes.c \

# **************************************************************************** #
#       RULES                                                                  #
# **************************************************************************** #
OBJS			=	$(SRCS:.c=.o)
GNL_OBJS		=	$(GNL_SRCS:.c=.o)

INCS			=	libft.h \
					get_next_line/get_next_line.h \

%.o				:	%.c $(INCS)
					$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT_A)		:	$(OBJS) $(GNL_OBJS)
					$(AR) $(LIBFT_A) $(OBJS) $(GNL_OBJS)

all				:	$(LIBFT_A)

clean			:
					$(RM) $(OBJS) $(GNL_OBJS)

fclean			:	clean
					$(RM) $(LIBFT_A)

re				:	fclean all

.PHONY			:	all clean fclean re
