/*
** EPITECH PROJECT, 2017
** display.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include "../include/my.h"

int get_lines(map_t *map)
{
	int i = 0;
	char temp[6];

	while (map->buffer[i] != '\n') {
		temp[i] = map->buffer[i];
		i++;
	}
	temp[i] = '\0';
	return (my_getnbr(temp));
}

int get_cols(map_t *map)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	while (map->buffer[i] != '\n') {
		i++;
	}
	i++;
	temp = i;
	while (map->buffer[temp] != '\n') {
		j++;
		temp++;
	}
	j++;
	return (j);
}
