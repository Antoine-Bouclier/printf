#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *format, ...);
int		ft_printchar(int c);
int		ft_printstr (char *str);
int		ft_printnbr (long int n, char *base);
char	*ft_itoa_base(long int n, char *base);

#endif