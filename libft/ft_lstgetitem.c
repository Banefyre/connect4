/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgetitem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 18:58:02 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/22 22:05:48 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstgetitem(t_list *list, unsigned int i)
{
	unsigned int	x;
	t_list			*tmp;

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
