#include "d42_parser.h"

static int		*dummy_is_terminal(char **str)
{
	(void)str;
	return (0);
}

static void		dummy_parse()
{
	;
}

void d42_parser_init(t_d42_parser *parser)
{
	parser->parse = dummy_parse;
	parser->is_terminal = dummy_is_terminal;
}

