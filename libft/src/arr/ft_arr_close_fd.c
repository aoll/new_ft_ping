/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_close_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 09:43:23 by alex              #+#    #+#             */
/*   Updated: 2017/05/18 16:52:52 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** close the fd inside the elem and free the elem
*/

void	ft_arr_close_fd(t_arr *arr)
{
	int *fd;

	fd = NULL;
	if (!arr)
	{
		return ;
	}
	while (arr->length)
	{
		fd = (int *)(ft_arr_pop(arr, 0));
		if (fd)
		{
			if (*fd >= 0)
			{
				close(*fd);
			}
			free(fd);
			fd = NULL;
		}
	}
	return ;
}
