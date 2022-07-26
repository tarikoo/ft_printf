/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:47:20 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/10 16:14:56 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = 0;
	if (c > 255)
		c -= 256;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			p = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		p = (char *)(s + i);
	return (p);
}
//Str parametresi ile gösterilen karakter dizisinde c parametresi ile göster
//ilen değerin (unsigned char olarak değerlendirilir) son geçtiği yeri arar
//ve bu bellek adresini gösteren bir işaretçi geri döndürür.
