#include "d42_lexer.h"
#include <stdlib.h>

t_d42_lexer_com	*d42_lex_buf(t_d42_lexer *lexer)
{
	static size_t	common;
	char			*cur_buf;
	char			*cur_lex;

	common = 0;
	cur_lex = *lexer->str;
	while (common < ((t_d42_vecchar*)lexer->ext)->dim)
	{
		cur_buf = ((t_d42_vecchar*)lexer->ext)->vec;
		while (cur_buf)
			if (*cur_buf == *cur_lex)
			{
				cur_lex++;
				break;
			}
			else
				cur_buf++;
		if (cur_buf)
			common++;
		else
			break;
	}
	if (common == ((t_d42_vecchar*)lexer->ext)->dim)
		*lexer->str = cur_lex;
	return ((t_d42_lexer_com*)&common);
}
