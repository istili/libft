# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: istili <istili@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 21:20:49 by istili            #+#    #+#              #
#    Updated: 2023/11/11 19:20:19 by istili           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
ARC		= ar rc

HEADER	= libft.h
FILE	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c  ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_atoi.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			ft_striteri.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c 

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
			
OBJS	= $(FILE:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(ARC) $(NAME) $(OBJS)
	
%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

bonus : $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS)

clean : 
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re