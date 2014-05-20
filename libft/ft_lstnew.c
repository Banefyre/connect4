/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/10 17:53:04 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/20 18:35:46 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ptr;

	ptr = (t_list*)malloc(sizeof(t_list));
	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ptr->content = NULL;
	ptr->content_size = 0;
	if (content)
	{
		ptr->content = malloc(content_size);
		if (ptr->content)
		{
			ft_memcpy(ptr->content, content, content_size);
			ptr->content_size = content_size;
		}
	}
	return (ptr);
}
