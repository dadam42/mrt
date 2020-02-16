#include "d42_lexer.h"

void	t_d42_lexer_init(t_d42_lexer *lexer)
{
	lexer->ignore = d42_lex_ignore;
	lexer->ignorestr = " \n\t";
}
