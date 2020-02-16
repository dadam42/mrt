CPPFLAGS=-Ilibft/includes
CFLAGS=-Wall -Wextra -Werror
CLEAN_DIR=.

SRCS=./ft_lstadd_front.c ./ft_lstsize.c ./ft_lstiter.c ./ft_lstdelone.c ./ft_lst_new.c ./ft_lstlast.c ./ft_lstaddback.c ./ft_lstclear.c 
.PHONY: clean
libft.a: $(SRCS:%.c=%.o)
	ar -rc $@ $?
	ranlib	$@
clean:
	rm -f $(CLEAN_DIR)/*.o
