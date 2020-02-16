CPPFLAGS=-Ilibft
CFLAGS=-g -Wall -Wextra -Werror
CLEAN_DIR=.
SRCS=./test_lexer.c ./lex_int.c ./t_d42_lexer_init.c ./d42_lex_ignore.c ./d42_lex_buf.c 

test: $(SRCS:%.c=%.o)
	gcc $(CFLAGS) $^ -o $@
.PHONY: clean
clean:
	rm -f $(CLEAN_DIR)/*.o
