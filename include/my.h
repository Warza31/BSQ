/*
** EPITECH PROJECT, 2017
** Piscine my.h
** File description:
** Courthias Hugo <hcourthias>
*/

#ifndef MY_H
#define MY_H

#define OBSTACLE 'o'
#define EMPTY '.'

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "map.h"

int my_strlen(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_getnbr(char const *str);
void bsq(char *filepath);
void copy_in_double(map_t *map);
void copy_in_buffer(map_t *map, int size);
void display(map_t *map);
int get_lines(map_t *map);
int get_cols(map_t *map);
int detect_square(map_t *map, int x, int y, int size);
void detect_biggest_square(map_t *map);
int check_if_ok(map_t *map, int x, int y);
void size_1(int x, int y, map_t *map);

#endif
