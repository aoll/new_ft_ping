/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kval_set_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 17:10:05 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:10:20 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** set the value value of a struct kval
*/

int	ft_kval_set_value(t_kval *kval, const char *value)
{
	if (!value)
	{
		return (EXIT_SUCCESS);
	}
	if (kval->value)
	{
		free(kval->value);
	}
	if (!(kval->value = ft_strdup(value)))
	{
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
