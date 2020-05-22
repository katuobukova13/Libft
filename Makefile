# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/10 13:19:32 by qblinky           #+#    #+#              #
#    Updated: 2020/05/23 00:44:17 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c\
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strncmp.c \
		ft_strlcat.c \
		ft_strlcpy.c   \
		ft_strlen.c \
		ft_strmapi.c  \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

BSRCS =	ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_lstmap.c

OBJECTS = $(SRCS:.c=.o)

BOBJECTS = $(BSRCS:.c=.o)

FLAGS =	-Wall -Wextra -Werror

CC = gcc $(FLAGS)

all: makelib make srcs make bonus

make srcs:
	$(CC) -c $(CFLAGS) $(SRCS) -I.

make bonus:
	$(CC) -c $(CFLAGS) $(BSRCS) -I.

makelib:
	@ar rcs $(NAME) $(OBJECTS) $(BOBJECTS) $(HEADER)

%.o: %.c $(HEADER)
	@$(CC) $< -o $@ $(HEADER)

clean:
	@rm -f $(OBJECTS)
	@rm -f $(BOBJECTS)

fclean: clean
	@rm -f all

re: fclean all

norme:
	norminette $(SRCS)
	norminette $(BSRCS)

.PHONY: all clean fclean re
