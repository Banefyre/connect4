/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:03:25 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/13 16:34:18 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	str = (char*)malloc((ft_strlen(s) + 1) * sizeof(*str));
	if (str)
	{
		while (s[i] != '\0')
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}
