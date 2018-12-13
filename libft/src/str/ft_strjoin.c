/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 17:01:55 by aollivie          #+#    #+#             */
/*   Updated: 2017/02/07 16:27:24 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*str;
	size_t	j;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1 && s2[i])
	{
		return (ft_strcpy(ft_strnew(ft_strlen((char *)s2)), (char *)s2));
	}
	if (!s2 && s1[i])
	{
		return (ft_strcpy(ft_strnew(ft_strlen((char *)s1)), (char *)s1));
	}
	if (!(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	while ((unsigned char)*s1)
		str[i++] = (unsigned char)*s1++;
	j = 0;
	while ((unsigned char)s2[j])
		str[i++] = (unsigned char)s2[j++];
	return ((char *)str);
}
