/*
** EPITECH PROJECT, 2017
** square.c
** File description:
** square.c file of the {{project_name}} project
*/
#include "../include/my.h"

int detect_square(map_t *map, int x, int y, int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (map->map[y + i][x + j] != EMPTY) {
				return (0);
			}
		}
	}
	map->size++;
	map->posx = x;
	map->posy = y;
	return (1);
}

void detect_biggest_square(map_t *map)
{
	int x = 0;
	int y = 0;

	map->size = 0;
	while (y < map->row) {
		while (x < map->col) {
			check_if_ok(map, x, y);
			x++;
		}
		x = 0;
		y++;
	}
}

int check_if_ok(map_t *map, int x, int y)
{
	int size = map->size;

	if (map->map[y][x] != EMPTY)
		return (0);
	for (; (size + y) <= map->row && (size + x) < map->col; size++) {
		if (map->col == 1 || map->row == 1) {
			size_1(x, y, map);
			map->size = 1;
			return (0);
		}
		size = map->size + 1;
		if (detect_square(map, x, y, size) == 0) {
			return (0);
		}
	}
	return (0);
}

void size_1(int x, int y, map_t *map)
{
	if (x < map->posx && y < map->posy) {
		map->posx = x;
		map->posy = y;
	}
}
