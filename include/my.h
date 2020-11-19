/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdarg.h>
#include <SFML/Graphics.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <math.h>

#ifndef MY_H_
#define MY_H_
#define MY_EXIT_ERROR (84)
#define MY_EXIT_SUCCESS (0)

typedef struct coef_t {
    double a0;
    double a1;
    double a2;
    double a3;
    double a4;
    int n;
} coef;

void bisection(coef *a);
void secante(coef *a);
void newton(coef *a);
int torus(char **av);
double fonction(coef *a, double x);

#endif /* MY_H_ */
