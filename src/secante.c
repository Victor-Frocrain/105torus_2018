/*
** EPITECH PROJECT, 2019
** secante
** File description:
** secante
*/

#include "my.h"

double fonction2(coef *a, float x)
{
    double a0 = a->a0;
    double a1 = a->a1;
    double a2 = a->a2;
    double a3 = a->a3;
    double a4 = a->a4;

    return ((a4 * pow(x, 4)) + (a3 * pow(x, 3)) + (a2 * pow(x,2)) +\
 (a1 * x) + a0);
}

void secante(coef *a)
{
    double x0 = 0;
    double x1 = 1;
    double xm1 = 0;
    double xm2 = 0;
    double xm = 0;//x1 - (xm2 * (x1 - x0) / (xm2 - xm1));
    double verif = x0 - x1;

    for (int i = 0; i < 500; i++) {
	if (round(x0 * pow(10, a->n)) == round(x1 * pow(10, a->n)))
            break;
        xm1 = fonction2(a, x0);
        xm2 = fonction2(a, x1);
        if (x1 - x0 == 0)
            exit(MY_EXIT_ERROR);
        if (xm == x1 - (xm2 * (x1 - x0) / (xm2 - xm1)))
            break;
        xm = x1 - (xm2 * (x1 - x0) / (xm2 - xm1));
        if (i == 0)
            printf("x = %.1f\n", xm);
        else
            printf("x = %.*f\n", a->n, xm);
        x0 = x1;
        x1 = xm;
    }
    /*if (verif < 0)
        verif *= -1;
    while (fonction(a, x0) != 0 && verif / (2 * xm) >= powf(10, -a->n)) {
        xm = (x0 + x1) / 2;
        if (fabs((x0 - x1) / 2 * xm) <= powf(10, -a->n))
            printf("x = %.*f\n", a->n, xm);
        else
            printf("x = %.*g\n", a->n, xm);
        xm1 = fonction(a, xm);
        xm2 = fonction(a, x0);
        if (fabs(fonction(a, x1)) <= powf(10, -a->n))
            break;
        if (xm1 * xm2 < 0)
            x1 = xm;
        else
            x0 = xm;
        verif = x0 - x1;
        if (verif < 0)
            verif *= -1;
    }*/
}
