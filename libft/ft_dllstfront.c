/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstfront.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/04 19:21:19 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/04 16:57:11 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_dllstfront(t_dllist **begin, void *c, size_t content)
{
	t_dllist	*old;
	t_dllist	*new;

	old = *begin;
	new = ft_dllstadd(c, content + 1);
	if (!old)
		*begin = new;
	else
	{
		new->next = old;
		old->prev = new;
		new->prev = NULL;
		*begin = new;
	}
}

