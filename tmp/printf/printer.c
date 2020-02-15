#include "printer.h"
#include "libft.h"

static int first_is_string(t_list **args)
{
	int	count;
	char *c;

	c = (char*)(*arg)->content;
	*arg = (*arg)->next;
	count = *(int*)(*arg)->content;
	while (count > 0)
	{
		if (! write(1, c, 1))
			break;
		count--;
	}
	return (count);
}

static int first_is_bg(t_list **args)
{
	int	count;
	char *s;

	s = (*arg)->content;
	*args = (*args)->next;
	count = *(int*)(*args)->content;
	return (write(1, s, count));	
}

int	printer(t_list **args)
{
	static t_printer_interface interface[PRINTER_INTERFACE_COUNT] = {first_is_string, first_is_bg};
	t_printer_mode mode;
	int ret;
	int err;

	while (*args)
	{
		mode = *(t_printer_mode*)(*args)->content;
		*args = (*args)->next;
		err = interface[mode](args);
		ret += *(int *)(*args)->content;
		if (err < 0)
		{
			ret -= err;
			break;
		}
		*args = (*args)->next;
	}
	return (ret);
}
