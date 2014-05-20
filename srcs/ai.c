/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ai.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:48:54 by msagodir          #+#    #+#             */
/*   Updated: 2014/03/09 22:06:56 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>
#include <libft.h>

static int		eval(t_grid *grid)
{
	if (check_winner(grid, 'X'))
		return (3000);
	else if (check_winner(grid, '0'))
		return (-3000);
	return (0);
}

static void		remove_piece(t_grid *grid, int input)
{
	int			i;

	i = 0;
	while (grid->map[i])
	{
		if (grid->map[i][input - 1] != '.')
		{
			grid->map[i][input - 1] = '.';
			return ;
		}
		i++;
	}
}

int				max(t_grid *grid, int depth, int i)
{
	int			max;
	int			tmp;

	max = -3000;
	if (depth <= 0)
		return (eval(grid));
	while (i < grid->columns)
	{
		if (grid->map[0][i] == '.')
		{
			put_piece(grid, i + 1, 'X');
			if (check_winner(grid, 'X') != 0)
			{
				remove_piece(grid, i + 1);
				return (3000);
			}
			tmp = min(grid, depth - 1, 0);
			if (tmp > max)
				max = tmp;
			remove_piece(grid, i + 1);
		}
		i++;
	}
	return (max);
}

int				min(t_grid *grid, int depth, int i)
{
	int			min;
	int			tmp;

	min = 3000;
	if (depth <= 0)
		return (eval(grid));
	while (i < grid->columns)
	{
		if (grid->map[0][i] == '.')
		{
			put_piece(grid, i + 1, 'O');
			if (check_winner(grid, 'O') != 0)
			{
				remove_piece(grid, i + 1);
				return (-3000);
			}
			tmp = max(grid, depth - 1, 0);
			if (tmp < min)
				min = tmp;
			remove_piece(grid, i + 1);
		}
		i++;
	}
	return (min);
}

int				minimax(t_grid *grid, int max, int i)
{
	int			ret;
	int			tmp;

	ret = 0;
	while (i < grid->columns)
	{
		if (grid->map[0][i] == '.')
		{
			put_piece(grid, i + 1, 'X');
			if (check_winner(grid, 'X') != 0)
			{
				remove_piece(grid, i + 1);
				return (i);
			}
			tmp = min(grid, 3, 0);
			if (tmp > max)
			{
				tmp = max;
				ret = i;
			}
			remove_piece(grid, i + 1);
		}
		i++;
	}
	return (ret);
}

