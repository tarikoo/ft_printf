/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:46:26 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/09 12:55:39 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*final;

	i = 0;
	if (s)
	{
		final = ft_strdup(s);
		if (!(final))
			return (NULL);
		while (s[i] != '\0')
		{
			final[i] = (*f)(i, s[i]);
			i++;
		}
		final[i] = '\0';
		return (final);
	}
	return (NULL);
}
