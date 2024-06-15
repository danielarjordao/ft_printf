/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:09:09 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/18 17:45:19 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(unsigned long nb, unsigned int base, char c)
{
	auto int i = 1;
	if ((long)nb < 0 && base == 10)
	{
		i = i + ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > base - 1)
	{
		i = i + ft_putnbr(nb / base, base, c);
		if ((nb % base) < 10)
			ft_putchar((nb % base) + '0');
		else if ((nb % base) > 0 && (nb % base) < 16 && c == 'x')
			ft_putchar((nb % base) - 10 + 'a');
		else if ((nb % base) > 0 && (nb % base) < 16 && c == 'X')
			ft_putchar ((nb % base) - 10 + 'A');
	}
	else if (nb > 9 && c == 'x')
		ft_putchar(nb - 10 + 'a');
	else if (nb > 9 && c == 'X')
		ft_putchar(nb - 10 + 'A');
	else 
		ft_putchar(nb + '0');
	return (i);
}
