# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antomart <antomart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/11 09:57:05 by antomart          #+#    #+#              #
#    Updated: 2020/01/21 10:00:40 by antomart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

cc 			= gcc

NAME = libft.a

SRC = ft_atoi.c \
	  	ft_bzero.c \
		ft_calloc.c \
		ft_islower.c \
		ft_isupper.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_isspace.c \
		ft_memset.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memalloc.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strmapi.c \
		ft_split.c \
		ft_strcat.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_strdup.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_strnstr.c \
		ft_strnew.c \
		ft_strlen.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_wordlen.c \
		ft_wordcount.c \
		ft_memdel.c \
		ft_negsign.c \
		ft_possign.c \
		ft_clear_lst.c \
		

BONUS	= ft_lstnew_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c \
			ft_lstiter_bonus.c \
			ft_lstmap_bonus.c \
			

BOBJ	= ${BONUS:.c=.o}

OBJ = $(SRC:.c=.o)

.c.o:	= ${CC} ${FLAG} -c "$< -o ${<:.c=.o}

$(NAME): ${OBJ}
		gcc $(FLAG) -c $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all: $(NAME)

bonus:
			gcc $(FLAG) -c $(BONUS) -c $(SRC)
			ar rc $(NAME) $(BOBJ) $(OBJ)
			ranlib ${NAME}
clean:
		rm -f $(OBJ) $(BOBJ)

fclean:
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

