/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taysoy <taysoy@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:45:08 by taysoy            #+#    #+#             */
/*   Updated: 2022/02/10 16:00:29 by taysoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*final;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	final = (char *) malloc(sizeof(char) * (len + 1));
	if (!final)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		final[i] = s1[i];
		i++;
	}
	final[i] = '\0';
	return (final);
}

// verilen stringi duplicate ederek bellekte onun için yer açar.
