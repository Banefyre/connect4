/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/05 19:34:42 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/05 19:55:02 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void			ft_dllstdel(t_dllist **item)
{
	t_dllist	*tmp;

	tmp = *item;
	if ((*item)->prev == NULL)
	{
		(*item)->next->prev = NULL;
		(*item) = (*item)->next;
	}
	else if ((*item)->next == NULL)
	{
		(*item)->prev->next = NULL;
		(*item) = (*item)->prev;
	}
	else
	{
		(*item)->prev->next = (*item)->next;
		(*item)->next->prev = (*item)->prev;
		(*item) = (*item)->next;
	}
	free(tmp);
}

