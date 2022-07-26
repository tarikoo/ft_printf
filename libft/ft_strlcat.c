/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:45:35 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/08 18:45:43 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	i;
	size_t	srcl;
	size_t	dstl;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	i = dstl;
	j = 0;
	if (dstsize == 0)
		return (srcl);
	if (dstsize < dstl)
		return (srcl + dstsize);
	else
	{
		while (src[j] && (dstl + j) < dstsize)
			dst[i++] = src[j++];
		if ((dstl + j) == dstsize && dstl < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (srcl + dstl);
	}
}
