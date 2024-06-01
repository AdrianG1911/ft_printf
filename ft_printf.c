/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:39:35 by adrgutie          #+#    #+#             */
/*   Updated: 2024/06/01 20:11:47 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dealwithit(const char ch, va_list args)
{
	if (ch == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (ch == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (ch == 'p')
		return (ft_printptr(va_arg(args, void *)));
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str != '%')
			count += ft_printchar(*str, 1);
		else
		{
			str++;
			count += ft_dealwithit(*str, args, &count);
		}
		str++;
	}
	va_end(args);
	return (count);
}
