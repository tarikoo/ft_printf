#include "ft_printf.h"

static int	ft_format(va_list arg, const char *format)
{
	int	printed;

	printed = 0;
	if (*format == 'c')
		printed += ft_print_char(va_arg(arg, int));
	else if (*format == 's')
		printed += ft_print_string(va_arg(arg, char *));
	else if (*format == 'p')
		printed += ft_print_pointer(va_arg(arg, unsigned long long));
	else if (*format == 'd' || *format == 'i')
		printed += ft_print_decimal(va_arg(arg, int));
	else if (*format == 'u')
		printed += ft_print_udecimal(va_arg(arg, unsigned int));
	else if (*format == 'x' || *format == 'X')
		printed += ft_print_hex(va_arg(arg, unsigned long long), *format);
	else if (*format == '%')
		printed += ft_print_percent();
	return (printed);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printed;

	va_start(args, format);
	printed = 0;
	while (*format)
	{
		if (*format == '%')
		{
			printed += ft_format(args, (format + 1));
			format++;
		}
		else
			printed += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (printed);
}