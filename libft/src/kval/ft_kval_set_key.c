/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kval_set_key.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 17:09:44 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:10:03 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** set the value key of a struct kval
*/

int	ft_kval_set_key(t_kval *kval, const char *key)
{
	if (!key)
	{
		return (EXIT_SUCCESS);
	}
	if (kval->key)
	{
		free(kval->key);
	}
	if (!(kval->key = ft_strdup(key)))
	{
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
