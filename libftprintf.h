
#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "my_libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	my_printf(const char *str, ...);
int	type_verification(va_list *args, char c);
int	check_ptr(unsigned long int ptr);
#endif
