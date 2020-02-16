#include "d42_lexer.h"

t_d42_lexer_com	*d42_lex_ignore(t_d42_lexer *lexer)
{
	char	*curign;
	
	if (lexer->ignorestr)
		while (1)
		{
			curign = lexer->ignorestr;
			while (*curign)
			{
				if (**lexer->str == *curign)
				{
					(*lexer->str)++;
					break;
				}
				else
					curign++;
			}
			if (!*curign)
				break;
		}
	return (0);
}
