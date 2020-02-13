#ifndef D42_PARSER_H
# define D42_PARSER_H

typedef struct s_d42_parser	t_d42_parser;
struct s_d42_parser
{
	int *(*is_terminal)(char **str);
	void (*parse)();
};

//int		d42_parser(t_stream str, t_equal e, t_apply a);
void		d42_parser_init(t_d42_parser *parser);
#endif
