/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 22:35:26 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/14 18:43:37 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (s1 && s2)
	{
		while (s1 || s2)
		{
			if (s1[i] == s2[i])
				i++;
			if (s1[i] == '\0' && s2[i] == '\0')
				return (1);
			if (s1[i] != s2[i])
				return (0);
		}
	}
	return (0);
}