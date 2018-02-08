/*
** EPITECH PROJECT, 2017
** Piscine main.c
** File description:
** Courthias Hugo <hcourthias>
*/
#include "../include/my.h"

int main(int argc, char **argv)
{
	if (argc == 2) {
		bsq(argv[1]);
	} else {
		return (84);
	}
}
