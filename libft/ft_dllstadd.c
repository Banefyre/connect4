/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstadd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/04 14:15:39 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/04 14:54:28 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_dllist		*ft_dllstadd(void const *cont, size_t content_size)
{
	t_dllist	*new;

	new = (t_dllist *)malloc(sizeof(t_dllist));
	if (!new)
		return (NULL);
	else
	{
		if (cont == NULL)
		{
			new->content = NULL;
			new->content_size = 0;
		}
		else
		{
			new->content_size = content_size;
			new->content = (void *)malloc(content_size);
			if (new->content)
				ft_memcpy(new->content, cont, content_size);
		}
		new->next = NULL;
		new->prev = NULL;
	}
	return (new);
}
