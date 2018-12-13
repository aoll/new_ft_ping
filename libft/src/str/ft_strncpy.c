/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:02:33 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/14 18:47:04 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i != n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i != n && !src[i])
	{
		while (i < n)
		{
			dst[i] = '\0';
			i++;
		}
	}
	return (dst);
}
