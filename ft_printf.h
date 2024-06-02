/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgutie <adrgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:43:01 by adrgutie          #+#    #+#             */
/*   Updated: 2024/05/31 16:53:33 by adrgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdint.h>

//req
int	ft_printf(const char *str, ...);
int	ft_printchar(char ch);
int	ft_printstr(char *str);
int	ft_printptr(void *ptr);
int	ft_printint(int num);
int	ft_printuint(unsigned int num);
int	ft_printuhex(uintptr_t num, int upper);

//bonus

#endif