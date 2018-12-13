/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kval_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 17:07:39 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:08:02 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** free the element inside the struct but not the ptr to this struct
*/

void	ft_kval_free(void **kval)
{
	t_kval *tmp;

	if (!kval)
		return ;
	tmp = *((t_kval **)kval);
	if (tmp->key)
		free(tmp->key);
	if (tmp->value)
		free(tmp->value);
	free(tmp);
	return ;
}
