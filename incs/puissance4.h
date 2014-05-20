/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msagodir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/18 18:03:09 by msagodir          #+#    #+#             */
/*   Updated: 2014/03/09 22:06:27 by msagodir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PUISSANCE4_H_
# define _PUISSANCE4_H_

# define USER_EXIT 2
# define SUCCESS 3

typedef struct		s_grid
{
	int				lines;
	int				columns;
	char			**map;
}					t_grid;

typedef struct		s_pos
{
	int				x;
	int				y;
	int				c;
}					t_pos;

void				display_grid(t_grid *grid);
void				start_game(t_grid *grid);
int					player_turn(t_grid *grid);
int					is_num(char *str);
void				call_winner(int winner);
void				ai_turn(t_grid *grid);
int					put_piece(t_grid *e, int input, char piece);
int					check_winner(t_grid *grid, int c);
int					min(t_grid *grid, int depth, int i);
void				ai_turn(t_grid *grid);
int				minimax(t_grid *grid, int max, int i);

#endif
