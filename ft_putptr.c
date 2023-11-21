/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:38:08 by dramos-j          #+#    #+#             */
/*   Updated: 2023/11/18 17:25:25 by dramos-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	i = i + ft_putstr("0x");
	i = i + ft_putnbr(ptr, 16, 'x');
	return (i);
}
