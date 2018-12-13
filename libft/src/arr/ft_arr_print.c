/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 16:59:43 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:42:38 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** pass on each elem to ptr an apply a print function
*/

void	ft_arr_print(const t_arr *arr)
{
	int				i;
	unsigned char	*ptr;
	void			*elem;

	if (!arr)
		return ;
	ptr = arr->ptr;
	i = 0;
	while (i < (int)arr->length)
	{
		elem = (void *)((unsigned char *)arr->ptr + i * arr->sizeof_elem);
		arr->f_print(elem);
		i++;
	}
	return ;
}
