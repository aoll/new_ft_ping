/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 16:12:17 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/20 16:10:04 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*str;
	size_t		j;

	j = 0;
	i = start;
	if (len == 1 && !s && start == 0)
	{
		str = ft_strnew(1);
		str[j] = '\0';
		return (str);
	}
	if (!s || !len)
		return (NULL);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	while (len-- && s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}
