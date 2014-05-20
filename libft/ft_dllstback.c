/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/04 14:18:09 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/04 16:48:32 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void			ft_dllstback(t_dllist **begin, void *c, size_t content)
{
	t_dllist	*old;
	t_dllist	*new;

	old = *begin;
	new = ft_dllstadd(c, content + 1);
	ft_putendl((char *)c);
	if (!old)
		*begin = new;
	else
	{
		while (old->next != NULL)
			old = old->next;
		old->next = new;
		new->prev = old;
		new->next = NULL;
	}
}
