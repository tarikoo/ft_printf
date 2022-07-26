/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:42:36 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/10 16:16:07 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
//Ptr1 parametresi ile gösterilen bellek bölgesinin n parametre değeri kadar
//ilk 
//byte'ını ptr2 parametresi ile gösterilen bellek bölgesi ile karşılaştırır.
//Eğer her iki bellekbölgesindeki tüm değerler aynı ise sıfır değeri, aksi 
//takdirde sıfırdan farklı bir değer geri döndürür.
