/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:48:34 by ooussaad          #+#    #+#             */
/*   Updated: 2022/11/04 22:22:20 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nbr, char Xx, int *len)
{
	char			*base;
	unsigned int	base_len;

	base_len = 16;

	if (Xx == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < 16)
		ft_putchar(base[nbr % base_len], len);
	else
	{
		ft_putnbr_base(nbr / base_len, Xx, len);
		ft_putnbr_base(nbr % base_len, Xx, len);
	}
}
