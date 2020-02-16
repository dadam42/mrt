#include "printer.h"
#include "libft.h"

size_t print_buf(char *s, size_t count)
{
	return (write(1, s, count));
}

size_t print_bg(char *s, size_t count)
{
	size_t mem;

	mem = count;
	while (count > 0 && (write(1, s, 1) > 0))
		count--;
	return (mem - count);
}

size_t	print_many()
