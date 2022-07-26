#include "ft_printf.h"

int	ft_print_char(const int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_string(const char *str)
{
	int	printed;

	printed = 0;
	if (str == NULL)
		return (ft_print_string("(null)"));
	while (*str)
		printed += ft_print_char(*str++);
	return (printed);
}

int	ft_print_decimal(int dec)
{
	int		printed;
	char	*value;

	printed = 0;
	value = ft_itoa(dec);
	printed = ft_print_string(value);
	free(value);
	return (printed);
}

int	ft_print_percent(void)
{
	return (ft_print_char('%'));
}