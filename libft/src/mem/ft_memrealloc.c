/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 21:48:55 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:12:31 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	return new void * width new len and copy old inside and free the old
*/

void	*ft_memrealloc(void **old, size_t old_n, size_t n)
{
	void *new;

	if (!(new = malloc(n)))
		return (NULL);
	ft_bzero(new, n);
	ft_memcpy(new, *old, old_n);
	free(*old);
	return (new);
}
