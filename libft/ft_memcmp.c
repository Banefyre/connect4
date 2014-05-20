/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                         :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 11:57:10 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/13 16:31:03 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*tmps1;
	char	*tmps2;
	int		i;

	i = 0;
	tmps1 = (char*)s1;
	tmps2 = (char*)s2;
	while (tmps1[i] == tmps2[i] && --n)
	{
		i++;
	}
	return (tmps1[i] - tmps2[i]);
}
