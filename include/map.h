/*
** EPITECH PROJECT, 2017
** Piscine map.h
** File description:
** Courthias Hugo <hcourthias>
*/

#ifndef MAP_H
#define MAP_H

#include <stddef.h>

typedef struct map
{
	int fd;
	char **map;
	char *buffer;
	int row;
	int col;
	int size;
	int posx;
	int posy;
}map_t;

#endif
