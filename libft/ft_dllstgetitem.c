/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstgetitem.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 19:29:26 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/13 16:26:59 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dllist			*ft_dllstgetitem(t_dllist *list, unsigned int i)
{
	unsigned int	x;
	t_dllist		*tmp;

	x = 1;
	tmp = list;
	while (tmp != NULL && x < i)
	{
		tmp = tmp->next;
		x++;
	}
	if (tmp == NULL)
		return (NULL);
	else
		return (tmp);
}
