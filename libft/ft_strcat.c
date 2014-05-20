/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:55:01 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/13 23:17:31 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	lenght_dest;
	int	i;

	lenght_dest = ft_strlen(s1);
	i = 0;
	while (s2[i] != 0)
	{
		s1[lenght_dest + i] = s2[i];
		i++;
	}
	s1[lenght_dest + i] = '\0';
	return (s1);
}
