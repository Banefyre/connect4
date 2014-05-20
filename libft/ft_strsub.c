/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:10:21 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/02 16:12:12 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = (char*)malloc(sizeof(str) * len + 1);
	if (str == NULL)
		return (NULL);
	while ((s[start] != '\0') && (i < len))
			{
				str[i] = s[start];
				start++;
				i++;
			}
			str[i] = '\0';
	return (str);
}
