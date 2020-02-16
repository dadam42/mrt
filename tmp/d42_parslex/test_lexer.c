#include "d42_lexer.h"
#include <stdio.h>

int test_int(char *strtest)
{
	t_d42_lexer lexer;
	t_d42_lexer_com *res;

	t_d42_lexer_init(&lexer);
	lexer.str = &strtest;
	res = d42_lex_int(&lexer);
	if (res)
		printf("lexed : %d\n", res->pint);
	else
		printf("lexed no int.\n");
	return (0);
}

int	test_buf(char *strtest)
{
	t_d42_lexer	lexer;
	t_d42_vecchar vecchar;
	t_d42_lexer_com	*res;

	t_d42_lexer_init(&lexer);
	lexer.str = &strtest;
	vecchar.vec = "Tavumoncul";
	vecchar.dim = 5;
	lexer.ext = &vecchar;
	res = d42_lex_buf(&lexer);
	if (res->psize == vecchar.dim)
		printf("Token recognized.\n");
	else
		printf("Token not recognized.\n");
	return (0);
}

int main()
{
	test_buf("Olé");
}	
