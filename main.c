/*
** EPITECH PROJECT, 2021
** bash_cicd
** File description:
** main
*/

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int program(char const **av)
{
    if (strcmp(av[1], "1") == 0)
        printf("Je suis le premier print\n");
    else if (strcmp(av[1], "2") == 0)
        printf("Je suis le deuxieme print\n");
    else if (strcmp(av[1], "3") == 0)
        printf("Je suis le troisieme print\n");
    else {
        printf("ERROR : Tu utilises mal le prorgramme\n");
        return (84);
    }
    return (0);
}

int main(int const ac, char const **av)
{

    if (ac == 1) {
        printf("ERROR : Tu as besoin d'arguments\n");
        return (84);
    }
    if (ac > 2) {
        printf("ERROR : Tu as vraiment trop d'arguments\n");
        return (84);
    }
    return (program(av));
}