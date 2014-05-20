/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 12:21:37 by msagodir          #+#    #+#             */
/*   Updated: 2014/03/09 22:08:29 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include <libft.h>
#include <puissance4.h>

static int		tie(t_grid *grid)
{
	int			i;

	i = 0;
	while (grid->map[0][i])
	{
		if (grid->map[0][i] == '.')
			return (0);
		i++;
	}
	return (24);
}

static int		found_line(t_pos pos, int i, int j, t_grid *grid)
{
	int			win;

	win = 0;
	while (grid->map[pos.y] && grid->map[pos.y][pos.x])
	{
		if (grid->map[pos.y][pos.x] == pos.c)
		{
			win++;
			if (win == 4)
				return (1);
		}
		else
			return (0);
		pos.y += j;
		pos.x += i;
	}
	return (0);
}

static int		read_line(int i, int j, int c, t_grid *grid)
{
	t_pos		pos;

	pos.y = i;
	pos.x = j;
	pos.c = c;
	if ((found_line(pos, 0, 1, grid)) || (found_line(pos, 1, 0, grid))
			|| (found_line(pos, 1, -1, grid)
			|| (found_line(pos, 1, 1, grid))))
		return (1);
	else
		return (0);
}

int				check_winner(t_grid *grid, int c)
{
	int			i;
	int			j;

	i = 0;
	while (grid->map[i] != NULL)
	{
		j = 0;
		while (grid->map[i][j])
		{
			if (read_line(i, j, c, grid) == 1)
				return (c);
			j++;
		}
		i++;
	}
	return (0);
}

void			start_game(t_grid *grid)
{
	int			random;
	int			i;
	int			winner;

	ft_putendl("starting the game");
	srand(time(NULL));
	random = rand() % 2;
	i = 0;
	while ((!(winner = check_winner(grid, 'X')))
			&& (!(winner = check_winner(grid, 'O'))) && (!(winner = tie(grid))))
	{
		random ^= 1;
		if (random)
		{
			while (player_turn(grid) == 0)
				i++;
		}
		else
			ai_turn(grid);
	}
	display_grid(grid);
	call_winner(winner);
}
