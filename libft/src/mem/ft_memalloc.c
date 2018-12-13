/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 18:44:11 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/19 14:20:56 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	if (!size)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (size)
	{
		str[i] = 0;
		i++;
		size--;
	}
	return ((void *)str);
}
