/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/18 18:01:49 by msagodir          #+#    #+#             */
/*   Updated: 2014/03/09 22:07:55 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
#include <puissance4.h>

void			calc_grid(t_grid *grid)
{
	int			i;
	int			j;

	i = 0;
	grid->map = (char **)malloc(sizeof(char *) * grid->lines + 1);
	while (i < grid->lines)
	{
		grid->map[i] = (char *)malloc(sizeof(char) * grid->columns + 1);
		j = 0;
		while (j < grid->columns)
		{
			grid->map[i][j] = '.';
			j++;
		}
		grid->map[i][j] = '\0';
		i++;
	}
	grid->map[i] = NULL;
}


static int		valid_num(char **av)
{
	if (ft_atoi(av[1]) < 6)
	{
		ft_putendl_fd("Min lines = 6", 2);
		return (0);
	}
	if (ft_atoi(av[2]) < 7)
	{
		ft_putendl_fd("Min columns = 7", 2);
		return (0);
	}
	return (1);
}

static int		valid_args(int ac, char **av)
{
	int			j;

	j = 1;
	if (ac > 3)
	{
		ft_putendl_fd("Too many infos, I need a line and a column number", 2);
		return (0);
	}
	else if (ac < 3)
	{
		ft_putendl_fd("Not enought info, I need a line and a columm number", 2);
		return (0);
	}
	while (j < 3)
	{
		if (!(is_num(av[j])))
		{
			ft_putendl_fd("arg need to be a num", 2);
			return (0);
		}
		j++;
	}
	return (1);
}

int				main(int ac, char **av)
{
	t_grid		grid;

	if (!(valid_args(ac, av)))
		return (0);
	if (!valid_num(av))
		return (0);
	grid.lines = ft_atoi(av[1]);
	grid.columns = ft_atoi(av[2]);
	calc_grid(&grid);
	start_game(&grid);
	return (0);
}
