/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 16:54:36 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 16:55:00 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** return a new poiteur t_arr with a new void *ptr
*/

t_arr	*ft_arr_new(const size_t length, const size_t sizeof_elem)
{
	t_arr *arr_ptr;

	if (!length || !sizeof_elem)
		return (NULL);
	if (!(arr_ptr = malloc(sizeof(t_arr))))
		return (NULL);
	arr_ptr->length = 0;
	arr_ptr->alloc_len = sizeof_elem * (length);
	arr_ptr->sizeof_elem = sizeof_elem;
	if (!(arr_ptr->ptr = malloc(arr_ptr->alloc_len)))
		return (NULL);
	ft_bzero(arr_ptr->ptr, arr_ptr->alloc_len);
	arr_ptr->f_cpy = &ft_memcpy;
	arr_ptr->f_del = &ft_memdel;
	arr_ptr->f_cmp = &ft_memcmp;
	return (arr_ptr);
}
