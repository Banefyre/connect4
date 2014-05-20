/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 16:49:26 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/20 18:19:25 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = (char)c;
	if (*s == d)
		return ((char*)s);
	while (*s++)
	{
		if (*s == d)
			return ((char*)s);
	}
	return (NULL);
}
