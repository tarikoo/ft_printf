#include "ft_printf.h"

static int	ft_hexadecimal_len(unsigned int number)
{
	int	printed;

	printed = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number /= 16;
		printed++;
	}
	return (printed);
}


int	ft_print_hex(unsigned int value, const char format)
{
	if (value == 0)
	{
		ft_putstr_fd("0", 1);
		return (1);
	}
	if (value >= 16)
	{
		ft_print_hex(value / 16, format);
		ft_print_hex(value % 16, format);
	}
	else
	{
		if (value <= 9)
			ft_putchar_fd(value + '0', 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd(value - 10 + 'a', 1);
			else if (format == 'X')
				ft_putchar_fd(value - 10 + 'A', 1);
		}
	}
	return (ft_hexadecimal_len(value));
}