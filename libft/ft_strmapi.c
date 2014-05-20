/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:05:43 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/13 16:35:31 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char	*str;
	int		i;
	size_t	len;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen((char*)s);
	str = (char*)malloc(sizeof(*str) * len + 1);
	if (str)
	{
		while (s[i] != '\0')
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
