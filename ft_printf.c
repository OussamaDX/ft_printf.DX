
#include "ft_printf.h"

static void	ft_printf_checker(va_list args,char *s, int *len)
{
	if (s == 's')
		ft_putstr_len(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_putnbr_len(va_arg(*args, int), len);
	else if (s == 'p')
		ft_pointerp(va_arg(*args, size_t), len);
	else if (s == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (s == '%')
		ft_putchar_len('%', len);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int	length;

	length = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			ft_printf_checker(args,stting[i],&length);
			i++;
		}
		else
			ft_putcharacter_length(string[i], &length);
		i++;
	}
	va_end(args);
	return (length);
}
