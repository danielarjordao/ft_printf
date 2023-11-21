/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:58:31 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/18 17:58:09 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, unsigned long)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int), 10, c));
	else if (c == 'u')
		return (ft_putnbr(va_arg(args, unsigned int), 10, c));
	else if (c == 'x' || c == 'X')
		return (ft_putnbr(va_arg(args, unsigned int), 16, c));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
