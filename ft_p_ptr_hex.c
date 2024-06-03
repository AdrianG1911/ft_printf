#include "ft_printf.h"

static int	findplen(uintptr_t pint)
{
	int	plen;

	if (pint == 0)
		return (1);
	plen = 0;
	while (pint)
	{
		pint /= 16;
		plen++;
	}
	return (plen);
}

static char	hextochar(int num, int upper)
{
	char	aA;

	aA = 'a';
	if (upper)
		aA = 'A';
	if (num < 10)
		return ('0' + num);
	else
		return (aA + (num - 10));
}

int	ft_printuhex(uintptr_t num, int upper)
{
	int			len;
	char		hexform[17];
	int			hexdigit;

	len = findplen(num);
	hexform[len] = 0;
	while (len)
	{
		len--;
		hexdigit = num & 0xF;
		hexform[len] = hextochar(hexdigit, upper);
		num >>= 4;
	}
	return (ft_printstr(hexform));
}

int ft_printptr(void *ptr)
{
	if (ptr == NULL)
		return (ft_printstr("(nil)"));
	ft_putstr_fd("0x", 1);
	return (ft_printuhex((uintptr_t)ptr, 0) + 2);
}