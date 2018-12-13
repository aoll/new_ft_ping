/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kval_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 17:09:22 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:09:41 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** return a new ptr to a struct t_kval else NULL
*/

t_kval	*ft_kval_new(void)
{
	t_kval *new;

	if (!(new = malloc(sizeof(t_kval))))
		return (NULL);
	new->key = NULL;
	new->value = NULL;
	return (new);
}
