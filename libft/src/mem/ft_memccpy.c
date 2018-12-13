/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:10:35 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/14 18:30:53 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *str;
	unsigned char *src2;

	str = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (n-- && *src2 != (unsigned char)c)
	{
		*str = *src2;
		str++;
		src2++;
	}
	if (*src2 == (unsigned char)c)
	{
		*str = *src2;
		str++;
		return (str);
	}
	else
		return (NULL);
}
