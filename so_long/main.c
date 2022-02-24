#include "./mlx/mlx.h"
#include "so_long.h"
#include <stdio.h>

int main(){
	read_map();

	config map;
	
	int		height = 1024;
	int		width = 1024;
	char	*relative_path = "./img/wall.xpm";
	void	*img;
	
	map.mlx = mlx_init();
	map.window = mlx_new_window(map.mlx, width, height, "Escaping Hell");
	img = mlx_xpm_file_to_image(map.mlx, relative_path, &width, &height);
	mlx_put_image_to_window(map.mlx, map.window, img, 0, 0);
	mlx_loop(map.mlx);
}
