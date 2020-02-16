#ifndef D42_LEXER_H
# define D42_LEXER_H
# include "d42_vecchar.h"
# include <stdlib.h>

typedef struct	s_d42_lexer
				t_d42_lexer;

typedef union	u_d42_lexer_com
{
	int				pint;
	char			yesno;
	float			pfloat;
	t_d42_vecchar	pvecchar;
	size_t			psize;
	void*			ppvoid;
}				t_d42_lexer_com;

struct			s_d42_lexer
{
	char	**str;
	char	*ignorestr;
	void			*ext;		
	t_d42_lexer_com	*(*ignore)(t_d42_lexer*);
};

t_d42_lexer_com	*d42_lex_int(t_d42_lexer *lexer);
t_d42_lexer_com	*d42_lex_float(t_d42_lexer *lexer);
t_d42_lexer_com	*d42_lex_buf(t_d42_lexer *lexer);
t_d42_lexer_com	*d42_lex_ignore(t_d42_lexer *lexer);
void			t_d42_lexer_init(t_d42_lexer *lexer);
#endif
