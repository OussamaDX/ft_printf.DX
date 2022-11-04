#include "ft_printf.h"

void ft_base(unsigned long nbr,int *len)
{
	char *base;
	
	base = "0123456789abcdef";
	if (nbr < 16)
		ft_putchar_len(base[nbr % 16],len);
	else
		ft_putchar_len(nbr / 16 ,len);
		ft_putchar_len(nbr % 16 ,len);
}

void ft_putp(void *p,int *len)
{
	unsigned long ptr;

	ptr = (unsigned long)p;

	ft_putstr_len("0x" ,len);
	ft_base(ptr,len);
}
