#include "printer.h"
#include "ft_printf.h"
#include "pf_parser.h"

int ft_printf(char *str, ...)
{
	char *cur;
	va_list	args;
	char	exec_ok;
	int		ret;

	va_start(args, str);
	cur = str;
	parse_ok = 1;
	while (cur)
	{
		while (cur != '%')
			cur++;
		if (cur > str)
		{
			if (print_buf(str, cur - str) != cur - str)
			{
				parse_ok = 0;
				break;
			}
			ret += cur - str;
			str = cur;
		}
		if (pf_exec_conv(&cur, args, &ret) != exec_ok)
			exec_ok
	}
	if (parse_ok)
		return (ret);
	return (-1);
}
