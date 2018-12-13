/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 20:58:14 by aollivie          #+#    #+#             */
/*   Updated: 2017/02/03 11:12:37 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_y(char const *s, char c)
{
	size_t			y;
	size_t			i;

	i = 0;
	y = 1;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			y++;
		i++;
	}
	if (s[0] == c)
		y = (y - 1);
	return (y);
}

static char			**ft_cp(char **tabb, char const *s, char c, size_t lin)
{
	size_t		y;
	size_t		i;
	size_t		j;

	j = 0;
	i = 0;
	y = 0;
	while (y < lin)
	{
		while (s[i] && s[i] == c)
		{
			i++;
			j++;
		}
		while (s[i] != c && s[i])
		{
			i++;
		}
		tabb[y] = ft_strsub(s, j, (i - j));
		j = i;
		y++;
	}
	tabb[lin] = NULL;
	return (tabb);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**tabb;
	size_t		lin;

	if (!s || !c)
		return (NULL);
	lin = ft_y(s, c);
	if (!(tabb = (char **)malloc(sizeof(char *) * (lin + 1))))
		return (NULL);
	tabb = ft_cp(tabb, s, c, lin);
	return (tabb);
}
