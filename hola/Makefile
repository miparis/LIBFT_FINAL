# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miparis <miparis@student.42madrid.>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 12:37:16 by miparis           #+#    #+#              #
#    Updated: 2023/10/12 02:31:06 by miparis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MY_SOURCES = ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_atoi.c \
				ft_memset.c \
				ft_memcpy.c \
				ft_bzero.c \
				ft_memmove.c \
				ft_memcmp.c \
				ft_memchr.c \
				ft_calloc.c \
				ft_strdup.c \
			   	ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_striteri.c \
				ft_strmapi.c \
				ft_itoa.c \
				ft_split.c

MY_BONUS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c

MY_OBJECTS =  $(MY_SOURCES:.c=.o) 

BONUS_OBJS = $(MY_BONUS:.c=.o)

INCLUDE = libft.h

CFLAGS = -Wall -Werror -Wextra 

CC		= gcc

%.o:%.c
		$(CC) $(CFLAGS) -c $< -o $@

all:$(NAME) 

$(NAME): $(MY_OBJECTS) 
			ar rcs $(NAME) $(MY_OBJECTS) 

bonus: $(NAME) $(MY_OBJECTS) $(BONUS_OBJS)
		ar rcs $(NAME) $(MY_OBJS) $(BONUS_OBJS)

clean:
		rm -f $(MY_OBJECTS) $(BONUS_OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

rebonus: fclean bonus

.PHONY: all clean fclean re
