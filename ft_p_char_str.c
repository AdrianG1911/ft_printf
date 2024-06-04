/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_char_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:50:42 by adrgutie          #+#    #+#             */
/*   Updated: 2024/06/04 13:51:56 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char ch)
{
	ft_putchar_fd(ch, 1);
	return (1);
}

int	ft_printstr(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
