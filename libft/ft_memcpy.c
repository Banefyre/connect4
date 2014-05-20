/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 18:20:55 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/20 18:13:55 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char	*src;
	char	*dest;

	dest = s1;
	src = (char*)s2;
	while (n--)
	{
		*dest++ = *src++;
	}
	return (s1);
}
