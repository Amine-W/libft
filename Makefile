# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amwahab <amwahab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/27 15:55:25 by amwahab           #+#    #+#              #
#    Updated: 2025/05/13 14:35:32 by amwahab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc
CFLAGS	= -Wall -Wextra -Werror
NAME = libft.a

SRCS	=	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_strtrim.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_substr.c \
		ft_putchar_fd.c \
		ft_toupper.c \
		ft_strjoin.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_split.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_strdup.c \
		ft_memcmp.c \
		ft_putnbr_fd.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c

SRCS_BONUS	=	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OBJ = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS_SRCS:.c=.o)

# Règle principale
all: $(NAME)

# Compilation de la libft
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compilation des bonus
bonus: $(NAME) $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

# Suppression complète (objets et libft.a)
fclean: clean
	rm -f $(NAME)

# Recompilation
re: fclean all

# Compilation des fichiers .c en fichiers .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

