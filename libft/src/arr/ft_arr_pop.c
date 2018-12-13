/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 16:55:05 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 16:55:47 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** pop a elem to arr->ptr in function of this index give in parameter
*/

void	*ft_arr_pop(t_arr *arr, int index)
{
	t_arr			*tmp;
	unsigned char	*ptr;
	unsigned char	*ptr_tmp;
	void			*pop;

	if (!arr || index < 0)
		return (NULL);
	tmp = arr;
	if (!tmp->length || index >= (int)tmp->length)
		return (NULL);
	ptr = (unsigned char *)tmp->ptr + (index * tmp->sizeof_elem);
	ft_memcpy(&pop, ptr, tmp->sizeof_elem);
	ptr_tmp = (unsigned char *)tmp->ptr + (index + 1) * tmp->sizeof_elem;
	ft_memmove(ptr, ptr_tmp, tmp->sizeof_elem * (tmp->length - index - 1));
	tmp->length--;
	return (pop);
}
