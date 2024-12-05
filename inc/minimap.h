#ifndef MINIMAP_H
# define MINIMAP_H
# include <math.h>
# define _MINIMAP_H
# define PLAYER_WIDTH 5
# define PLAYER_HEIGHT 5
//#define SQUARES_SIZE 20
# define MINIMAP_SIZE 200
# define MAP_SQUARES_SIZE 1
# define MOVEMENT_DELTA	0.13
// #define MOVEMENT_DELTA	0.2
# define ROTATION_DELTA	0.06
# define SCREEN_WIDTH 2480
# define SCREEN_HEIGHT 1240

typedef struct s_img
{
	void	*img;
	void	*mlx_ptr;
	void	*win_ptr;
	char	*addr;
	int		bits_pxl;
	int		line_len;
	int		endian;
	int		width; //maybe not needed
	int		height; //maybe not needed
}				t_img;


/* KEY MAPPING */
//# define KEY_W			13
//# define KEY_A			0
//# define KEY_S			1
//# define KEY_D			2
//# define KEY_ESC			53
//# define KEY_LEFT			123
//# define KEY_RIGHT		124

# define KEY_W			119
# define KEY_A			97
# define KEY_S			115
# define KEY_D			100
# define KEY_ESC		65307
# define KEY_LEFT		65361
# define KEY_UP			65362
# define KEY_RIGHT		65363
# define KEY_DOWN		65364

#endif
