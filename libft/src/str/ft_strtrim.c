/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 17:47:28 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/20 19:42:28 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s2)
{
	char	*str;
	int		i;
	int		j;

	j = 0;
	if (!s2)
		return (NULL);
	while ((s2[j] == ' ' || s2[j] == '\t' || s2[j] == '\n'))
	{
		j++;
	}
	i = ft_strlen(s2);
	while ((s2[i - 1] == ' ' || s2[i - 1] == '\t' || s2[i - 1] == '\n')\
	&& s2[j])
	{
		i--;
	}
	str = ft_strsub(s2, j, i - j);
	if (!str)
		return (NULL);
	return (str);
}
