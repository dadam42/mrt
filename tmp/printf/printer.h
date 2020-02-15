#ifndef PRINTER_H
# define PRINTER_H
# include <stdio.h>
# include "libft.h"
# define PRINTER_INTERFACE_COUNT 2
typedef enum e_printer_mode {printer_first_is_string, printer_first_is_bg, printer_stop} t_printer_mode;

typedef int (*t_printer_interface)(t_list);

int printer(t_printer_mode priniter_mode, t_list args);
#endif
