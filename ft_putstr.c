/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:17:57 by ooussaad          #+#    #+#             */
/*   Updated: 2022/11/04 22:17:35 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putstr(const char *s,int *len)
{

	if (s == NULL)
		ft_putstr("(null)", len);
	while (s && *s)
	{
		ft_putchar(*s, len);
		s++;
	}
}
