#include "ft_printf.h"

void	ft_putnbr_len(int n, int len)
{
	while (len)
	{
	if (n == -2147483648)
		ft_putstr_len("-2147483648", len);
	else if (n < 0)
	{
		ft_putchar_len('-', len);
		ft_putnbr_len(-n, len);
	}
	else if (n >= 10)
	{
		ft_putnbr_len(n / 10, len);
		ft_putchar_len(n % 10 + '0', len);
	}
	else
		ft_putchar_len(n + '0', len);
	len++;
	}
}
