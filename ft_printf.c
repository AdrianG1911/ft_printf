/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:39:35 by adrgutie          #+#    #+#             */
/*   Updated: 2024/05/31 18:16:51 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	ft_putstr(str, 1);
	return (ft_strlen(str));
}

void	dealwithit(const char ch, va_list args, int *countp)
{
	if (ch == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		*countp += 1;
	}
	else if (ch == 's')
		*countp += ft_printstr(va_arg(args, char *));
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
			ft_putchar_fd(*str, 1);
		else
		{
			str++;
			ft_dealwithit(*str, args, &count);
		}
		str++;
		count++;
	}
	va_end(args);
	return (count);
}
