#include "../../inc/cub3D.h"

int	close_win(t_map *map)
{
	(void)map;
	exit (printf("Exit cub3D\n") * EXIT_SUCCESS);
}

int	get_square_on_position(t_map *map, t_f_point position)
{
	int	row;
	int	col;
	int	result;

	row = position.y;
	col = position.x;
	result = map->map[row][col];
	return (result);
}

t_f_point	from_rad_to_vect(float radians, float len)
{
	t_f_point	rotated;

	rotated.x = len * cos(radians);
	rotated.y = len * sin(radians);
	return (rotated);
}

char	*ft_strndup(const char *src, size_t n)
{
	size_t	len;
	char	*dst;

	len = ft_strlen(src);
	if (n < len)
		len = n;
	dst = (char *)ft_calloc(len + 1, sizeof(char));
	if (!dst)
		return (NULL);
	if (dst)
		ft_memcpy(dst, src, len);
	return (dst);
}
