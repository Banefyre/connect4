/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <msagodir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 16:00:43 by msagodir          #+#    #+#             */
/*   Updated: 2014/03/09 22:03:41 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <puissance4.h>
#include <libft.h>

int			is_num(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_isdigit(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void		ai_turn(t_grid *grid)
{
	int		col;
	int		max;
	int		i;

	max = -3000;
	i = 0;
	col = minimax(grid, max, i);
	while (!put_piece(grid, col + 1, 'X'))
		col++;
}

void		display_grid(t_grid *grid)
{
	int		i;
	int		j;

	i = 0;
	while (grid->map[i])
	{
		j = 0;
		while (grid->map[i][j])
		{
			ft_putchar(grid->map[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	i = 1;
	while (i < grid->columns + 1)
	{
		ft_putnbr(i % 10);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void		call_winner(int winner)
{
	if (winner == 'X')
		ft_putendl("Computer won, try again !");
	else
		ft_putendl("You win, well played !");
}
