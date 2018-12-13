/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 16:56:45 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 16:57:17 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** take void *array and a cmp_function to sort the array
*/

void	*ft_array_sort(
	void *arr, size_t nb_elem, size_t sizeof_elem, t_func_ptr_cmp f_comp)
{
	unsigned char *tmp;

	if (!arr || !nb_elem || !sizeof_elem || !f_comp)
		return (arr);
	tmp = arr;
	while ((size_t)(tmp - (unsigned char *)arr) / sizeof_elem < nb_elem - 1)
	{
		if (f_comp((const void *)(tmp),\
		(const void *)((tmp + sizeof_elem)), sizeof_elem) > 0)
		{
			ft_swap((void *)(tmp), (void *)((tmp + sizeof_elem)), sizeof_elem);
			tmp = arr;
		}
		else
			tmp += sizeof_elem;
	}
	return (arr);
}
