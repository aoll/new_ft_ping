/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_str_print.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 17:03:46 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:05:10 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** print all char * from char **
*/

void	ft_array_str_print(const char **s)
{
	while (*s)
	{
		ft_putstr(*s);
		ft_putchar('\n');
		break ;
		s++;
	}
	return ;
}
