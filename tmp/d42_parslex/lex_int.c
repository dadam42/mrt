#include "d42_lexer.h"
t_d42_lexer_com	*d42_lex_int(t_d42_lexer *lexer)
{
	static int	ret;
	char		ret_is_neg;
	char		*cur;

	ret = 0;
	ret_is_neg = 1;
	cur = *lexer->str;
	if (*cur == '-')
		cur++;
	else
		ret_is_neg = 0;
	if (!(*cur >= '0' && *cur <= '9'))
		return (0);
	*lexer->str = cur;
	while (**lexer->str >= '0' && **lexer->str <= '9')
	{
		ret = 10 * ret + '0' - **lexer->str;
		(*lexer->str)++;
	}
	if (!ret_is_neg)
		ret = -ret;
	return ((t_d42_lexer_com*)&ret);
}
