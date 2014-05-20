/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:20:39 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/20 18:19:52 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	d;

	ptr = NULL;
	d = (char)c;
	if (*s == d)
		ptr = (char*)s;
	while (*s++)
		if (*s == d)
			ptr = (char*)s;
	return (ptr);
}
