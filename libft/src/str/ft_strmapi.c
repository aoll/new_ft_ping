/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 21:56:56 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/19 21:06:05 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			j;
	unsigned int	i;

	i = 0;
	j = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		str[j] = f(i, s[i]);
		i++;
		j++;
	}
	return (str);
}
