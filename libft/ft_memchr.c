/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:09:30 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/13 16:30:26 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void						*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*str;
	unsigned char			d;

	str = s;
	d = (unsigned char)c;
	while (n--)
	{
		if (*str == d)
		{
			return ((void*)(str));
		}
		str++;
	}
	return (NULL);
}
