/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:35:20 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/20 20:10:05 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len;
	size_t n;

	if (size <= ft_strlen((char *)dst))
		return (size + ft_strlen((char *)src));
	j = 0;
	len = ft_strlen(dst);
	i = ft_strlen(dst);
	n = size - len - 1;
	while (n && src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
		n--;
	}
	dst[i] = '\0';
	return (len + ft_strlen(src));
}
