/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:42:26 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/10 16:15:58 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	a;

	if (!s && !n)
		return (0);
	str = (unsigned char *)s;
	i = 0;
	a = (unsigned char )c;
	while (i < n)
	{
		if (str[i] == a)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
//Ptr parametresi ile gösterilen bellek bölgesinin n parametre değeri kadar 
//ilk byte'ında c parametresi ile gösterilen değerin (unsigned char olarak 
//değerlendirilir) ilk geçtiği yeri arar ve bu bellek adresini gösteren bir 
//işaretçi geri döndürür.
//Eğer ptr parametresi NULL bir işaretçi ise anlamsız bir sonuç elde edilir.
