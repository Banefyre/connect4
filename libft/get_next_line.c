/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/02 18:01:39 by msagodir          #+#    #+#             */
/*   Updated: 2014/03/09 16:44:05 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <libft.h>

int					get_next_line(int fd, char **line)
{
	static char		*buff;
	int				ret;

	if (fd == -1)
		return (-1);
	buff = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
	*line = buff;
	while ((ret = read(fd, buff, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buff[ret] = '\0';
		while (*buff != '\0')
		{
			if (*buff == '\n')
			{
				*buff = '\0';
				return (1);
			}
			buff++;
		}
	}
	return (0);
}
