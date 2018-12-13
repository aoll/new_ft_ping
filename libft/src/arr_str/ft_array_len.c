/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 17:02:25 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:02:41 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_array_len - return the size of a array if is terminated by null
*/

size_t	ft_array_len(const void **array)
{
	size_t size;

	size = 0;
	if (!array)
		return (0);
	while (array[size])
	{
		size++;
	}
	return (size);
}
