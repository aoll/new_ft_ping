/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 15:48:33 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/18 19:15:18 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t n2;

	if (!*s2)
		return ((char *)s1);
	while (*s1 && n)
	{
		i = 0;
		n2 = n;
		while (s1[i] == s2[i] && n2)
		{
			i++;
			if (!s2[i])
				return ((char *)s1);
			if (!s1[i])
				return (NULL);
			n2--;
		}
		s1++;
		n--;
	}
	return (NULL);
}
