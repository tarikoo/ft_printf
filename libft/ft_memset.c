/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:43:10 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/10 16:15:11 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*set;

	set = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		set[i] = c;
		i++;
	}
	b = set;
	return (b);
}
// stringte ki karakteri dest parametresindeki bellek bölgesinin ilk n parame
// tre değeri kadar byte'ına kopyalar. dest null ise belirsiz sonuçlar elde 
// edilir.
