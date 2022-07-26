/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:11:54 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/15 13:12:28 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_getsize(int n)
{
	int	nega;
	int	dec;

	dec = 0;
	nega = 0;
	if (n < 0)
	{
		nega++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		dec++;
	}
	return (dec + nega);
}

char	*ft_op(char *s, int n, size_t size)
{
	int	is_neg;

	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	s[size] = '\0';
	while (--size)
	{
		s[size] = (n % 10) + 48;
		n /= 10;
	}
	if (is_neg == 1)
		s[0] = '-';
	else
		s[0] = (n % 10) + 48;
	return (s);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*final;

	size = ft_getsize(n);
	if (size == 0)
	{
		final = (char *) malloc(2);
		final[0] = '0';
		final[1] = '\0';
		return (final);
	}
	if (n == -2147483648)
	{
		final = ft_strdup("-2147483648");
		final[11] = '\0';
		return (final);
	}
	final = (char *) malloc(sizeof(char) * (size + 1));
	if (!final)
		return (NULL);
	final = ft_op(final, n, size);
	return (final);
}
