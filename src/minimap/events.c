#include "../../inc/cub3D.h"

int	fdf_key_press_hook(int key, t_point *movement)
{
	if (key == KEY_D)
		movement->x = 1;
	if (key == KEY_A)
		movement->x = -1;
	if (key == KEY_W)
		movement->y = 1;
	if (key == KEY_S)
		movement->y = -1;
	if (key == KEY_RIGHT)
		movement->z = 1;
	if (key == KEY_LEFT)
		movement->z = -1;
	return (TRUE);
}

int	fdf_key_release_hook(int key, t_point *movement)
{
	
	if (key == KEY_ESC)
		exit (printf("Exit cub3D\n") * EXIT_SUCCESS);
	if (key == KEY_D && movement->x == 1)
		movement->x = 0;
	if (key == KEY_A && movement->x == -1)
		movement->x = 0;
	if (key == KEY_W && movement->y == 1)
		movement->y = 0;
	if (key == KEY_S && movement->y == -1)
		movement->y = 0;
	if (key == KEY_RIGHT && movement->z == 1)
		movement->z = 0;
	if (key == KEY_LEFT && movement->z == -1)
		movement->z = 0;
	return (TRUE);
}
