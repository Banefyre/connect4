/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddorcreate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 16:34:53 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/20 16:36:20 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstaddorcreate(t_list **addto, void *toadd, int content_size)
{
	if (*addto == NULL)
		*addto = ft_lstnew(toadd, content_size);
	else
		ft_lstaddend(addto, ft_lstnew(toadd, content_size));
}

