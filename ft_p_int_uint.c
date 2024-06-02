#include "ft_printf.h"

static int	numlen(long num)
{
	int len;

	if (num == 0)
		return (1);
	len = 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

int	ft_printint(int num)
{
	ft_putnbr_fd(num, 1);
	if (num < 0)
		return (numlen(num) + 1);
	else
		return (numlen(num));
}

int ft_printuint(unsigned int num)
{
	int		len;
	char	decrep[11];

	len = numlen(num);
	decrep[len] = 0;
	while (len)
	{
		len--;
		decrep[len] = (num % 10) + '0';
		num /= 10;
	}
	return (ft_printstr(decrep));
}