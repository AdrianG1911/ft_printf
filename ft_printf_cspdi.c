#include "ft_printf.h"

int	ft_printstr(char *str)
{
	ft_putstr(str, 1);
	return (ft_strlen(str));
}