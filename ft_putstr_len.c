include "ft_printf.h"

void	ft_putsr_le(char *args, int *length)
{
	size_t	i;

	i = 0;
	if (!args)
		return (NULL);
	while (args[i] != '\0')
	{
		ft_putchar_len(args[i], length);
		i++;
	}
}

