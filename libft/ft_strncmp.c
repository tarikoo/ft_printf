/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:46:42 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/10 16:13:14 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (i < n - 1) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// Str1 parametresi ile gösterilen karakter dizisinin, n parametre değeri 
// kadar ilk karakterini, str2 parametresi ile gösterilen karakter dizisi
// ile karşılaştırır.Eğer her iki karakter dizisindeki tüm karakterler 
// aynı ise sıfır değeri, aksi takdirde sıfırdan farklı bir değer geri 
// döndürür.Str1 ve Str2 parametlerini ilk karakterinden itibaren 
// karşılaştırır. Birbirlerine eşitse karakteler farklı olana veya karakter
// dizisinin sonunu gösteren nullile karşılaşana kadar karşılaştırmaya devam 
// eder.
