NAME = libft.a

SRC = ft_atoi.c  ft_isalnum.c ft_isalpha.c ft_isascii.c\
	  ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
	  ft_memmove.c ft_memset.c ft_strchr.c ft_strjoin.c ft_bzero.c ft_tolower.c\
	  ft_toupper.c  ft_strncmp.c ft_strdup.c ft_strlen.c ft_strrchr.c ft_strlcpy.c\
	  ft_strlcat.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_substr.c\
	  ft_calloc.c ft_itoa.c ft_putnbr_fd.c ft_strmapi.c ft_strnstr.c ft_strtrim.c\
	  ft_split.c

OBJ = $(SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

.c.o:
   		
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re 
