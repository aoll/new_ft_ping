/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:45:56 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:13:00 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *a, void *b, size_t n)
{
	unsigned char *tmp;

	tmp = malloc(sizeof(unsigned char) * n);
	ft_memcpy(&tmp, b, n);
	ft_memcpy(b, a, n);
	ft_memcpy(a, &tmp, n);
	free(tmp);
	tmp = NULL;
	return ;
}
