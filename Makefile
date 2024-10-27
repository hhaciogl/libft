C_FILES := \
    ft_isalpha.c \
    ft_isdigit.c \
    ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	# ft_split.c \
	# ft_itoa.c \
	# ft_strmapi.c \
	# ft_striteri.c \
	# ft_putchar_fd.c \
	# ft_putstr_fd.c \
	# ft_putendl_fd.c \
	# ft_putnbr_fd.c



OBJECT_FILES := $(patsubst %.c,%.o,$(C_FILES))

NAME := libft.a

# RULES
all: run

$(NAME): $(OBJECT_FILES)
	ar src $(NAME) $(OBJECT_FILES)

$(OBJECT_FILES): %.o: %.c
	cc -o $@ -c $< -Wextra -Wall -Werror

clean:
	rm -f $(OBJECT_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all test

test: $(NAME) test.c
	cc test.c -o test -L. -lft

run: test
	./test
	
push:
	set -e
	clear
	norminette $(C_FILES) libft.h
	git add .
	git commit -m "update" 
	git push origin master

.PHONY: clean all re run fclean push 