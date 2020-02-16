#ifndef PRINTER_H
# define PRINTER_H
# include <stdlib.h>
# include <unistd.c>
# include "libft.h"
# define PRINTER_INTERFACE_COUNT 2

size_t	print_buf(char *s, size_t count);
size_t	print_bg(char *s, size_t count);

#endif
