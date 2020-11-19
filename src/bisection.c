/*
** EPITECH PROJECT, 2019
** bisection
** File description:
** bisection
*/

#include "my.h"

int number_disp(float xm, coef *a)
{
    static int i = 0;

    if (i < a->n)
        i++;
    return (i);
}

double fonction(coef *a, double x)
{
    return ((a->a4 * pow(x, 4)) + (a->a3 * pow(x, 3)) + (a->a2 * pow(x,2)) + (a->a1 * x) + a->a0);
}

void bisection(coef *a)
{
    double x0 = 0;
    double x1 = 1;
    double xm1 = 0;
    double xm2 = 0;
    double xm = (x0 + x1) / 2;
    double verif = x0 - x1;

    if (verif < 0)
        verif *= -1;
    while (fonction(a, x0) != 0 && verif / (2 * xm) >= powf(10, -a->n)) {
        xm = (x0 + x1) / 2;
	printf("x = %.*f\n", number_disp(xm, a), xm);
        xm1 = fonction(a, xm);
        xm2 = fonction(a, x0);
        if (fabs(fonction(a, x1)) <= powf(10, -a->n) || fabs((x0 - x1) / 2 * xm) <= powf(10, -a->n - 1))
            break;
        if (xm1 * xm2 < 0)
            x1 = xm;
        else
            x0 = xm;
        if (xm == (x0 + x1) / 2)
            break;
        verif = x0 - x1;
        if (verif < 0)
            verif *= -1;
    }
}
