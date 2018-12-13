/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 08:55:09 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:11:10 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_list_st(char **i, int **l)
{
	if (*i != NULL)
		free(i);
	if (*l != NULL)
		free(l);
	l = NULL;
	i = NULL;
	return ;
}

void		ft_free_list(t_list **list)
{
	t_list *r;
	t_list *t;

	r = *list;
	if (list == NULL)
		return ;
	while (r->next)
	{
		t = r->next;
		ft_free_list_st(&r->name, &r->size);
		free(r);
		r = NULL;
		r = t;
	}
	ft_free_list_st(&r->name, &r->size);
	free(r);
	r = NULL;
	return ;
}
