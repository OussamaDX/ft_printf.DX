/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:15:31 by ooussaad          #+#    #+#             */
/*   Updated: 2022/11/04 22:34:34 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
int		ft_printf(const char *string, ...);
void 	ft_putchar(char c,int *len);
void	ft_putnbr_base(unsigned int nbr, char Xx, int *len);
void    ft_putnbr_u(unsigned int n, int *len);
void	ft_putnbr_len(int n, int *len);
void	ft_putstr(const char *s,int *len);
void	ft_pointer(void *ptr, int *len);

#endif
