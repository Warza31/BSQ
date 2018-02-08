/*
** EPITECH PROJECT, 2017
** bsq fill.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include "../include/my.h"

void copy_in_buffer(map_t *map, int size)
{
	map->buffer = malloc((sizeof(char) * size));
	read(map->fd, map->buffer, size);
}

void copy_in_double(map_t *map)
{
	int i = 0;
	int row = 0;
	int col = 0;
	int temp;

	map->map = malloc(sizeof(char *) * (map->row+1));
	for (; map->buffer[i] != '\n'; i++) ;
	i++;
	temp = i;
	for (; row <= map->row; row++) {
		map->map[row] = malloc(sizeof(char) * (map->col));
		for (; col < map->col; col += 1) {
			map->map[row][col] = map->buffer[temp];
			temp += 1;
		}
		col--;
		map->map[row][col] = '\0';
		col = 0;
	}
}
