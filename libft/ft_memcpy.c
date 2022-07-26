/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:42:46 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/08 18:42:47 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstc;
	const char	*srcc;

	if ((dst == src) || (n == 0))
		return (dst);
	if (!dst && !src)
		return (0);
	dstc = (char *)dst;
	srcc = (const char *)src;
	while (n--)
	{
		dstc[n] = srcc[n];
	}
	return (dst);
}
