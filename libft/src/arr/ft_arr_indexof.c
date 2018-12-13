/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_indexof.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 16:54:19 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 16:59:22 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** return the index if the element to_find is present is the arr else -1
*/

int	ft_arr_indexof(const t_arr *arr, const void *to_find)
{
	size_t			index;
	const t_arr		*tmp;
	unsigned char	*ptr;

	if (!arr || !to_find)
		return (-1);
	index = 0;
	tmp = arr;
	ptr = tmp->ptr;
	while (index < tmp->length)
	{
		if (!tmp->f_cmp((const void *)ptr, to_find, tmp->sizeof_elem))
		{
			return (index);
		}
		ptr += tmp->sizeof_elem;
		index++;
	}
	return (-1);
}
