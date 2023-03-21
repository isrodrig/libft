 # **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isrodrig <isrodrig@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 12:49:14 by isrodrig          #+#    #+#              #
#    Updated: 2023/02/23 14:59:31 by isrodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		=	ft_atoi.c \
			  	ft_bzero.c \
			  	ft_calloc.c \
				ft_isalnum.c \
		  		ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
	 			ft_toupper.c \
				ft_split.c \
				
BONUS = .bonus

SRCBONUS =		ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstlast.c \
				ft_lstsize.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstclear.c \
				ft_lstmap.c \

CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)
OBJSBONUS = $(SRCBONUS:.c=.o)

RM 	= rm -f

%.o: %.c libft.h Makefile
	@$(CC) $(CFLAGS) -c $< -o $@


all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo $(NAME) and files .o created

bonus: $(OBJS) $(OBJSBONUS)
	@ar rsc $(NAME) $(OBJS) $(OBJSBONUS)
	@touch bonus
	@echo bonus compiled

clean:
	@$(RM) $(OBJS) $(OBJSBONUS)
	@$(RM) bonus
	@echo files .o removed

fclean: clean
	@$(RM) $(NAME) $(BONUS) $(OBJSBONUS)
	@echo $(NAME) and bonus removed

re: fclean all

.PHONY: all clean fclean re
