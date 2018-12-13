/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:45:56 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/14 18:37:50 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int i;
	int len2;

	i = 0;
	len2 = len;
	while (i < len2)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
