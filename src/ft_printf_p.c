#include "ft_printf.h"

static int  ft_pointer_len(unsigned long number)
{
    int count;

    count = 0;
    if(number == 0)
        return(1);
    while (number != 0)
    {
        number /= 16;
        count++;
    }
    return(count);
}

static int  ft_print_ptr(unsigned long long value)
{
	if (value >= 16)
	{
		ft_print_ptr(value / 16);
		ft_print_ptr(value % 16);
	}
	else
	{
		if (value <= 9)
			ft_putchar_fd(value + '0', 1);
		else
			ft_putchar_fd(value - 10 + 'a', 1);
	}
	return (ft_pointer_len(value));
}

int	ft_print_pointer(unsigned long long address)
{
	int	printed;

	printed = 0;
	printed += ft_print_string("0x");
	if (address == 0)
		printed += write(1, "0", 1);
	else
		printed += ft_print_ptr(address);
	return (printed);
}