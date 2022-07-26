/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:45:20 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/09 12:55:16 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_filler(char const *s, char *final, size_t in)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		final[in] = s[i];
		i++;
		in++;
	}
	return (in);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	size_t	i;
	char	*final;

	if (s1 && s2)
	{
		size_s1 = ft_strlen(s1);
		size_s2 = ft_strlen(s2);
		final = (char *) malloc(sizeof(char) * (size_s1 + size_s2 + 1));
		if (!(final))
			return (NULL);
		i = 0;
		i = ft_filler(s1, final, i);
		i = ft_filler(s2, final, i);
		final[i] = '\0';
		return (final);
	}
	return (NULL);
}
