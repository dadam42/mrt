#include "pf_exec_conv.h"
#include "d42_lexer.h"

void	parse_optflaglst(char **str, struct s_exec_info *info)
{

}

int pf_exec_conv(char **str, va_list args, int *count)
{
	struct s_exec_info exec_info;
	struct s_lexer	lexer;

	lexer_init(&lexer, str, sizeof(char));
	parse_optflaglst(lexer, &exec_info);
	parse_optwidth(lexer, &exec_info);
	parse_optprec(lexer, &exec_info);
	if (parse_conv_char(lexer, &conv_info) == parse_error)
		return (EXEC_ERROR);
	return (exec(&exec_info));
}

/*
conv -> optflaglst optprec conv_char {exec[conv_char](&conv_info)}
optflaglst ->	empty
				| flag optflaglst
flag -> ZERO {conv_info->flags |= FLAG_ZERO}
		| MINUS {conv_info->flags |= FLAG_MINUS}

optwidth -> empty
		| INT	

optprec -> empty
		| DOT INT
conv_char -> C
			| S
			| N
*/
