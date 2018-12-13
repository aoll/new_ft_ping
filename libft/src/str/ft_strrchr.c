/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 23:51:33 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/18 18:33:46 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (*s)
		s++;
	while (i != 0)
	{
		if (*s == c)
			return ((char*)s);
		s--;
		i--;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
