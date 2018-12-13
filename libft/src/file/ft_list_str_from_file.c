/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_str_from_file.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 11:35:49 by aollivie          #+#    #+#             */
/*   Updated: 2016/01/30 11:35:52 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_listprint(t_list *tmp)
{
	while (tmp)
	{
		ft_putstr(tmp->name);
		ft_putchar('\n');
		tmp = tmp->next;
	}
}

t_list	*ft_listnew(int *size, char *src)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->next = NULL;
	new->name = ft_strdup(src);
	new->size = malloc(sizeof(int));
	new->size = size;
	return (new);
}

void	ft_listadd(t_list **list, t_list *new)
{
	t_list *tmp;

	tmp = *list;
	while (tmp->next)
		tmp = tmp->next;
	*new->size = *new->size + 1;
	tmp->next = new;
}

void	ft_list(t_list **list, char *src)
{
	t_list		*new;
	t_list		*tmp;
	int			*n;

	tmp = *list;
	if (tmp == NULL)
	{
		n = malloc(sizeof(int));
		*n = 0;
		new = ft_listnew(n, src);
		*n = *n + 1;
		*list = new;
		return ;
	}
	else
	{
		ft_listadd(list, ft_listnew(tmp->size, src));
	}
}
