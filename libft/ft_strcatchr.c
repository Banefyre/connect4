/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcatchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/09 15:40:52 by msagodir          #+#    #+#             */
/*   Updated: 2013/12/26 15:54:48 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strcatchr(char *str, int c)
{
	int		len;
	char	*ret;

	len = ft_strlen(str);
	ret = (char*)malloc(sizeof(char*) * (len + 2));
	ret = str;
	ret[len] = c;
	ret[len + 1] = '\0';
	return (ret);
}
