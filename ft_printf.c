/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:50:24 by ooussaad          #+#    #+#             */
/*   Updated: 2022/11/04 22:47:16 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_flags(va_list args, const char format, int *len)
{
	if (format == 'd' || format == 'i')
		ft_putnbr_len(va_arg(args, int), len);
	else if (format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), len);
	else if (format == 'c')
		ft_putchar((char)va_arg(args, int), len);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (format == '%')
		ft_putchar(format, len);
	else if (format == 'x')
		ft_putnbr_base(va_arg(args, int), format, len);
	else if (format == 'X')
		ft_putnbr_base(va_arg(args, int), format, len);
	else if (format == 'p')
		ft_pointer(va_arg(args,void *), len);
}
int	ft_printf(const char *string, ...)
{
	va_list	args;
	int	length;

	length = 0;
	va_start(args, string);
	while (*string != '\0')
	{
		if (*string == '%')
		{
			check_flags(args,*(string + 1),&length);
			string++;
		}
		else
			ft_putchar(*string, &length);
		string++;
	}
	va_end(args);
	return(length);
}
