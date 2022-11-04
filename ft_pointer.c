/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:47:07 by ooussaad          #+#    #+#             */
/*   Updated: 2022/11/04 22:29:36 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putexa(unsigned long int nbr, char c, int *len)
{
	unsigned long int	base_len;
	char	*base;

	base_len = 16;
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nbr < 16)
		ft_putchar(base[nbr % base_len], len);
	else
	{
		ft_putexa(nbr / base_len, c, len);
		ft_putexa(nbr % base_len, c, len);
	}
}
void	ft_pointer(void *ptr, int *len)
{
	unsigned long int i;

	i = (unsigned long int)ptr;
	ft_putstr("0x", len);
	ft_putexa(i, 'x', len);
}
