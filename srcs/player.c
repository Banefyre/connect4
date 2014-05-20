/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 12:46:02 by msagodir          #+#    #+#             */
/*   Updated: 2014/03/09 22:08:51 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <puissance4.h>

int			put_piece(t_grid *e, int input, char piece)
{
	int		i;

	i = 0;
	while (e->map[i])
	{
		if (i == 0 && e->map[i][input - 1] != '.')
			return (0);
		else if (!e->map[i + 1])
		{
			e->map[i][input - 1] = piece;
			return (1);
		}
		else if (e->map[i + 1][input - 1] != '.')
		{
			e->map[i][input - 1] = piece;
			return (1);
		}
		i++;
	}
	return (0);
}


static int	read_number(int col)
{
	char	*line;
	int		ret;

	line = NULL;
	ft_putstr("It's your turn (enter number between 1 and ");
	ft_putnbr(col);
	ft_putstr(") : ");
	if (get_next_line(0, &line) < 1)
	{
		free(line);
		return (-2);
	}
	if (!is_num(line))
	{
		free(line);
		return (-1);
	}
	ret = ft_atoi(line);
	free(line);
	return (ret);
}

int			player_turn(t_grid *grid)
{
	int		input;

	display_grid(grid);
	while ((input = read_number(grid->columns)) != -2)
	{
		if (input == -1)
			ft_putendl_fd("Input error : You must enter a number", 2);
		else if (input <= 0 || input > grid->columns)
			ft_putendl_fd("Input error : Number not in range", 2);
		else if (grid->map[0][input - 1] != '.')
			ft_putendl_fd("Input error : You can't play here", 2);
		else
		{
			put_piece(grid, input, 'O');
			return (1);
		}
	}
	return (0);
}
