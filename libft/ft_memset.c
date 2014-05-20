/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:51:43 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/13 16:33:32 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*un;

	un = b;
	while (len > 0)
	{
		*un = c;
		un++;
		len--;
	}
	return (b);
}
