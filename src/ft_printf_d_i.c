#include "ft_printf.h"

static int  ft_number_len(unsigned int number)
{
    int len;
    
    len = 0;
    while(number != 0)
    {
        len++;
        number /= 10;
    }
    return (len);
}

static char *ft_uitoa(unsigned int number)
{
    char    *str;
    int     len;

    len = ft_number_len(number);
    str = malloc (sizeof(char) * len + 1);
    if(!str)
        return(NULL);
    str[len] = '\0';
    while(number != 0)
    {
        str[len - 1] = number %10 + '0';
        number /= 10;
        len--;
    }
    return(str);
}

int ft_print_udecimal(unsigned int value)
{
    char    *str;
    int     printed;

    printed = 0;
    if(value == 0)
        printed += write(1, "0", 1);
    else
    {
        str = ft_uitoa(value);
        printed += ft_print_string(str);
        free(str);
    }
    return (printed);
}