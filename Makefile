SRCS =	ft_atoi.c \
		ft_isalpha.c \
		ft_itoa.c \
		ft_memcpy.c \
		ft_putendl_fd.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_putnbr_fd.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_isdigit.c \
		ft_memset.c \
		ft_putstr_fd.c \
		ft_strjoin.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_putchar_fd.c \
		ft_strlcat.c \
		ft_strncmp.c 

OBJS = ${SRCS:.c=.o}



NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar -rc
# Colors
C_RED = \033[1;31m
C_GREEN = \033[1;32m
C_L_GREEN = \033[1;32m
C_BLUE = \033[1;34m
C_L_BLUE = \033[1;34m
C_WHITE = \033[1;37m
C_RES = \033[0m

all: ${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
			

$(NAME): $(OBJS)
			$(AR) $(NAME) $(OBJS)
			@echo "$(C_GREEN)[LIBRARY CREATED!]$(C_RES)"

clean:
			${RM} ${OBJS} ${OBJSBONUS}
			@echo "$(C_RED)[OBJECT DELETED!]$(C_RES)"

fclean: clean
			${RM} ${NAME}
			@echo "$(C_RED)[LIBFT.A REMOVED!]$(C_RES)"


re: fclean all

