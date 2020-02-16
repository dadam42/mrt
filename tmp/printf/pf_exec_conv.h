#ifndef PF_EXEC_CONV_H
# define PF_EXEC_CONV_H
# include <stdarg.h>
struct s_exec_info
{
	unsigned short	flags;
	int				width;
	int				prec;
	char			conv;
};
int	pf_exec_conv(char **str, va_list args, int *count);
#endif
