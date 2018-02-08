/*
** EPITECH PROJECT, 2017
** bsq fill.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include "../include/my.h"

void bsq(char *filepath)
{
	map_t *map;
	struct stat fileStat;

	map = NULL;
	map = malloc(sizeof(map_t));
	map->fd = open(filepath, O_RDONLY);
	stat(filepath, &fileStat);
	copy_in_buffer(map, fileStat.st_size);
	map->row = get_lines(map);
	map->col = get_cols(map);
	copy_in_double(map);
	free(map->buffer);
	detect_biggest_square(map);
	display(map);
	free(map);
}
