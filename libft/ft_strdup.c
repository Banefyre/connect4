/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:53:41 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/20 18:19:01 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*copie;
	size_t	lenght;
	size_t	i;

	i = 0;
	lenght = ft_strlen(s);
	copie = (char*)malloc(sizeof(char) * (lenght + 1));
	if (copie)
	{
		while (i <= lenght)
		{
			copie[i] = s[i];
			i++;
		}
		return (copie);
	}
	else
	{
		return (NULL);
	}
}
