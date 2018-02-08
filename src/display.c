/*
** EPITECH PROJECT, 2017
** display.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include "../include/my.h"

void display(map_t *map)
{
	int row = 0;
	int col = 0;

	while (row < map->size) {
		while (col < map->size) {
			map->map[map->posy][map->posx + col] = 'x';
			col++;
		}
		col = 0;
		row++;
		map->posy++;
	}
	row = 0;
	while (row < map->row) {
		write(1, map->map[row], my_strlen(map->map[row]));
		my_putchar('\n');
		free(map->map[row]);
		row += 1;
	}
	free(map->map);
}
