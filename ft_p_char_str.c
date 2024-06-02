#include "ft_printf.h"

int ft_printchar(char ch)
{
	ft_putchar_fd(ch, 1);
	return (1);
}
int	ft_printstr(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}