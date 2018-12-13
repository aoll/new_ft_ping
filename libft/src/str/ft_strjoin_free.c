/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 14:34:02 by alex              #+#    #+#             */
/*   Updated: 2017/05/18 16:49:21 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** join two string return a new pointeur and free the old dest
*/

char	*ft_strjoin_free(char **dest, const char *add_str)
{
	char *tmp;
	char *s;

	if (!dest)
	{
		tmp = ft_strnew(0);
	}
	if (*dest)
	{
		s = *dest;
		tmp = ft_strdup(s);
		free(s);
	}
	else
	{
		tmp = ft_strnew(0);
	}
	*dest = ft_strjoin(tmp, add_str);
	free(tmp);
	return (*dest);
}
