#include "libft.h"

void ft_putchar_len(char c ,int *len)
{
	write(1,&c,1);
	*len++;
}
