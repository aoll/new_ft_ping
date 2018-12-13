/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexof_first_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:31:01 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 16:51:50 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** return the index of the first match between c and *s
** -1 if the c is not present in s
*/

int	ft_indexof_first_char(const char *s, const char c)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			return (i);
		i++;
		s++;
	}
	return (-1);
}
