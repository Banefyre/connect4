/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:22:37 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/13 16:31:20 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*dest;
	const char	*src;

	dest = s1;
	src = s2;
	if (dest <= src || src >= (dest + n))
	{
		while (n--)
		{
			*dest++ = *src++;
		}
	}
	else
	{
		src = src + n - 1;
		dest = dest + n - 1;
		while (n--)
		{
			*dest-- = *src--;
		}
	}
	return (s1);
}
