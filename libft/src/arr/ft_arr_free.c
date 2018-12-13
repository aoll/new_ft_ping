/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 16:53:59 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 16:58:58 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** free all elem present ptr with f_del on each, on after free arr
*/

void	ft_arr_free(t_arr *arr)
{
	int				i;
	t_arr			*tmp;
	unsigned char	*ptr;

	if (!arr)
		return ;
	tmp = arr;
	ptr = tmp->ptr;
	if (!ptr)
		return ;
	i = -1;
	while (++i < (int)tmp->length)
	{
		tmp->f_del((void **)ptr);
		ptr += tmp->sizeof_elem;
	}
	if (tmp->ptr)
	{
		free(tmp->ptr);
		tmp->ptr = NULL;
	}
	free(tmp);
	return ;
}
