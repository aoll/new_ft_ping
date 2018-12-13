/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 16:52:58 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 16:58:37 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** return - a new t_arr * copyed from the old
*/

static int	ft_arr_dup_set_f(t_arr *new, t_arr *old)
{
	new->f_print = old->f_print;
	new->f_cpy = old->f_cpy;
	new->f_cmp = old->f_cmp;
	new->f_dup_elem = old->f_dup_elem;
	new->f_del = old->f_del;
	return (EXIT_SUCCESS);
}

t_arr		*ft_arr_dup(t_arr *old)
{
	t_arr			*new;
	int				index;
	unsigned char	*tmp;
	int				length;

	if (!old)
		return (NULL);
	length = old->length ? old->length : 1;
	if (!(new = ft_arr_new(length, old->sizeof_elem)))
		return (NULL);
	ft_arr_dup_set_f(new, old);
	tmp = old->ptr;
	index = -1;
	while (++index < (int)old->length)
	{
		if (tmp)
		{
			ft_arr_push(new, old->f_dup_elem(tmp, old->sizeof_elem), -1);
			tmp += old->sizeof_elem;
		}
	}
	return (new);
}
