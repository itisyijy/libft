# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/21 19:59:27 by jeongyle          #+#    #+#              #
#    Updated: 2022/12/28 12:57:11 by jeongyle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC		= gcc
CFLAG	= -Wall -Wextra -Werror

RM		= rm -f

AR		= ar
ARFLAGS       = crs

INCLUDES	= ./libft.h 

SRCS_1	= ft_strlen.c		\
		  ft_strlcpy.c		\
		  ft_strlcat.c		\
		  ft_strchr.c		\
		  ft_strnstr.c		\
		  ft_strncmp.c		\
		  ft_strdup.c		\
		  ft_strrchr.c		\
		  ft_memset.c		\
		  ft_memcpy.c		\
		  ft_memmove.c		\
		  ft_memchr.c		\
		  ft_memcmp.c		\
		  ft_bzero.c		\
		  ft_atoi.c			\
		  ft_calloc.c		\
		  ft_isalnum.c		\
		  ft_isalpha.c		\
		  ft_isascii.c		\
		  ft_isdigit.c		\
		  ft_isprint.c		\
		  ft_strdup.c		\
		  ft_tolower.c		\
		  ft_toupper.c		\
			
SRCS_2	= ft_substr.c		\
		  ft_strjoin.c		\
		  ft_strtrim.c		\
		  ft_split.c		\
		  ft_strmapi.c		\
		  ft_striteri.c		\
		  ft_itoa.c			\
		  ft_putchar_fd.c	\
		  ft_putstr_fd.c	\
		  ft_putendl_fd.c	\
		  ft_putnbr_fd.c	\

SRC_BONUS = ft_lstnew.c		\
		  ft_lstsize.c		\
		  ft_lstadd_front.c	\
		  ft_lstadd_back.c	\
		  ft_lstclear.c		\
		  ft_lstlast.c		\
		  ft_lstiter.c		\
		  ft_lstmap.c		\
		  ft_lstdelone.c	\

SRCS	= $(SRCS_1)			\
	  $(SRCS_2)				\

OBJS	= $(SRCS:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

bonus : $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $^

.PHONY : all clean fclean re