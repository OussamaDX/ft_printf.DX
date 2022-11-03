#include "ft_printf.h"

void ft_check_flags(char c,va_list args,int *len)
{
	if (c == 's')
		return (ft_putstr_len(va_arg(arg,char *),len));
	else if (s == 'd' || s == 'i')
		return (ft_putnbr_len(va_arg(args,int),len));
	else if (c == 'c')
		return (ft_putchar_len(va_arg(args,int)));
	else if (c == '%')
		return (ft_putchar_len('%' ,len));
		
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int i;
	int len;

	i = 0;
	len = 0;
	va_start(args, string);
	if (!string)
		return (0);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			ft_check_flags(string[i], args, &len);
			i++;
		}
		else
		{
			ft_putcharacter_length((char)string[i], &len);
			i++;
		}
	}
	va_end(args);
	return (length);
}
