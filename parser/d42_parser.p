int	d42_parser(t_stream str, t_equal e, t_apply a)
{
	if (e->equal(str))
	{
		a->apply();
		return (0);
	}
	return (1);
}

int d42_req_parser(t_stream str, t_equal e, t_apply a)
{
	int	ret = 0;
	if (str->pointed_object->isterminal())
	{
		str->pointed_object->apply_before();
		ret = d42_rec_parser(str->next());
		str->pointed_object->apply_after();
	}
	else
	{
		
	}
}

int	d42_sym_parser(t_sym_parser *parser, t_apply a)
{
	static t_sym_parser		buffer[D42_PARSER_SYM_BUFFER];
	static size_t			bdx;

	while (bdx < D42_PARSER_SYM_BUFFER)
	{
		if (sym_parser->isTerminal(parser->str))

	}
}

int *d42_root_parser(char **str)
{
	static unsigned char 	buffer[D42_PARSER_ROOT_BUFFER];
	static size_t			bdx = 0;
	static unsigned char	sdx = 8;
	static int				ret = 0;

	while (bdx < D42_PARSER_ROOT_BUFFER)
	{
		while (sdx < 8)
		{
			ret = buffer[bdx] & 1;
			buffer[bdx] >= 1;
			return (&ret);
			sdx++;
		}
		sdx = 0;
		bdx++;
	}
	return (0);
}

//
//
//


static int		*dummy_is_terminal(char **str)
{
	(void)str;
	return (0);
}

void	dummy_parse()
{
	;
}

void init(t_d42_parser *parser)
{
	parser->parse = d_42_dummy_parse;
	parser->is_terminal = dummy_is_terminal;
}





