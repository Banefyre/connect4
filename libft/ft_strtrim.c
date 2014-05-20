/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 18:17:21 by msagodir          #+#    #+#             */
/*   Updated: 2014/01/13 16:36:40 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_test_char(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (1);
	}
	return (0);
}

char			*ft_strtrim(char const *s)
{
	int			i;
	char		*str;
	int			j;

	j = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (ft_strlen(s)));
	if (!str)
		return (NULL);
	while (ft_test_char(s[i]) == 1)
		i++;
	str = ft_strsub(s, i, ft_strlen(s) - i);
	i = 0;
	while (str[j] != '\0')
	{
		if (ft_test_char(str[j]) == 1)
			i++;
		if (ft_test_char(str[j]) == 0 && str[j + 1] != '\0')
			i = 0;
		j++;
	}
	str[ft_strlen(str) - i] = '\0';
	return (str);
}
