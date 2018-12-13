/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:12:59 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/14 18:49:45 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t i;
	size_t j;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] && s2[j] && s1[i + j] == s2[j])
			j++;
		if (!s2[j])
			return ((char *)s1 + (i));
		i++;
	}
	return (NULL);
}
