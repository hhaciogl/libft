C_FILES := \
    ft_isalpha.c \
    ft_isdigit.c \
    ft_isalnum.c \
	ft_isascii.c \
	# ft_isprint.c \
	# ft_strlen.c \
	# ft_memset.c \
	# ft_bzero.c \
	# ft_memcpy.c \
	# ft_memmove.c \
	# ft_strlcpy.c \
	# ft_strlcat.c \
	# ft_toupper.c \
	# ft_tolower.c \
	# ft_strchr.c \
	# ft_strrchr.c \
	# ft_strncmp.c \
	# ft_memchr.c \
	# ft_memcmp.c \
	# ft_strnstr.c \
	# ft_atoi.c \
	# ft_calloc.c \
	# ft_strdup.c


OBJECT_FILES := $(patsubst %.c,%.o,$(C_FILES))

NAME := libft.a

# RULES
all: norm run

$(NAME): $(OBJECT_FILES)
	ar src $@ $^

$(OBJECT_FILES): %.o: %.c
	gcc -o $@ -c $< -Wextra -Wall -Werror

clean:
	rm -f $(OBJECT_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all test

test: $(NAME) test.c
	@gcc test.c -o $@ -L. -lft -Wextra -Wall -Werror

run: test
	@./test

norm:
	@norminette $(C_FILES) libft.h | less

.PHONY: clean all re run fclean norm