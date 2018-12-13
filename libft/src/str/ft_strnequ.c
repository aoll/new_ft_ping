/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:23:04 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/14 18:47:24 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s1 && s2)
	{
		while (s1 || s2 || n--)
		{
			if (s1[i] == s2[i])
				i++;
			if (s1[i] == '\0' && s2[i] == '\0')
				return (1);
			if (i == n)
				return (1);
			if (s1[i] != s2[i])
				return (0);
		}
	}
	return (0);
}
