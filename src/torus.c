/*
** EPITECH PROJECT, 2019
** torus
** File description:
** torus
*/

#include "my.h"

coef *init_coef(coef *a, char **av)
{
    a = malloc(sizeof(coef));
    a->a0 = strtof(av[2], NULL);
    a->a1 = strtof(av[3], NULL);
    a->a2 = strtof(av[4], NULL);
    a->a3 = strtof(av[5], NULL);
    a->a4 = strtof(av[6], NULL);
    a->n = strtod(av[7], NULL);
    return (a);
}

int torus(char **av)
{
    int opt = strtod(av[1], NULL);
    coef *a = init_coef(a, av);

    if (opt == 1)
        bisection(a);
    else if (opt == 2)
        newton(a);
    else if (opt == 3)
        secante(a);
    else
        return (MY_EXIT_ERROR);
    return (MY_EXIT_SUCCESS);
}
