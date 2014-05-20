/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:16:43 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/20 18:20:37 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*tmp;
	char	*tmp_s1;
	char	*tmp_s2;

	tmp_s1 = (char*)s1;
	if (!*s2)
		return ((char*)s1);
	while (*tmp_s1)
	{
		tmp_s2 = (char*)s2;
		tmp = tmp_s1;
		while (*tmp_s1 && *tmp_s2 && *tmp_s1 == *tmp_s2)
		{
			tmp_s1++;
			tmp_s2++;
		}
		if (!*tmp_s2)
			return (tmp);
		tmp_s1 = tmp + 1;
	}
	return (NULL);
}
