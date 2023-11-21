/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:40:12 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/18 17:26:05 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "Libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_format(va_list args, const char c);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(unsigned long nb, unsigned int base, char c);
int	ft_putptr(unsigned long ptr);

#endif
