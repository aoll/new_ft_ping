/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:25:31 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/19 22:02:04 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	unsigned char		*str2;
	int					tmp2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	if (str1 && str2)
		while (str1[i] && str2[i] && str1[i] == str2[i] && i + 1 < n)
			i++;
	tmp2 = str2[i] ? str2[i] : 0;
	return ((str1[i] ? str1[i] : 0) - tmp2);
}
