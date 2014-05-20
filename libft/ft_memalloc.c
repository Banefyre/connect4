/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:50:33 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/20 18:24:13 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*str;

	str = (unsigned char*)malloc(sizeof(unsigned char) * size);
	if (str)
		return ((void*)(str));
	return (NULL);
}
