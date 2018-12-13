/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 12:29:29 by alex              #+#    #+#             */
/*   Updated: 2017/05/18 17:04:11 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_array_free - free and set to null a array char **
*/

void	ft_array_free(char ***array)
{
	char	**tab;
	int		i;

	if (!array)
		return ;
	tab = *array;
	if (!tab)
	{
		*array = NULL;
		return ;
	}
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(*array);
	*array = NULL;
	return ;
}
