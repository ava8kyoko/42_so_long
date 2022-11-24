#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include "libft/libft.h"
# include <stdbool.h>
# include <stdio.h>
# include "mlx/minilibx_opengl/mlx.h"


typedef struct s_data
{
/*
** File
*/
	char 	**map;
	size_t	height;
	size_t	width;

/*
** mlx values
*/
	void	*mlx;
	int		win_x;
	int		win_y;
	void	*window;
	int		tile_size;

/*
** Map indexes
*/
	size_t	map_x;
	size_t	map_y;

/*
** Images 
** P = player
** C = item
** E = exit
*/
	void	*exit;
	void	*floor;
	void	*item;
	void	*player_down;
	void	*player_left;
	void	*player_right;
	void	*player_top;
	void	*wall;


/*
** Tile types number
*/
	size_t	nb_move;
	size_t	nb_player;
	size_t	nb_item;
	size_t	nb_exit;

/*
** Player position
*/
	size_t	pos_x;
	size_t	pos_y;
}			t_data;


/*
** so_long fonctions
*/
int		exit_game(t_data *data);
void	init_xpm(t_data *data);
int		keybind(int key, t_data *data);
int		main(int argc, char **argv);
void	put_image_on_map(t_data *data);
void	valid_file(t_data *data, char *file);
void	valid_map(t_data *data);

#endif
