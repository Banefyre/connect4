/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:37:20 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/13 16:28:27 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char			*src;
	char			*dest;
	unsigned char	stop;

	stop = (unsigned char)c;
	dest = s1;
	src = (char*)s2;
	if (n)
	{
		while (n--)
		{
			if ((*dest++ = *src++) == stop)
				return (dest);
		}
	}
	return (NULL);
}
