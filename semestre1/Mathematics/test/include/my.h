/*
** EPITECH PROJECT, 2020
** 104intersection
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>

typedef struct variable_s
{
    int opt;
    int xp;
    int yp;
    int zp;
    int xv;
    int yv;
    int zv;
    int p;
    float a;
    float b;
    float c;
    float delta;
}variable_t;

int gest_error(int ac, char **av);
int verif_opt(char **av);
int verif_ac(int ac);
int verif_str_int(char **str);
int verif_lenght(int ac);
int gest_eroor(int ac, char **av);
int intersection(int ac, char **av);
void display_mess_error(void);
int main(int ac, char **av);
variable_t *to_struct(char **av, variable_t *var);
int search_type_firstarg(variable_t *var);
void cylinder(variable_t *var);
void sphere(variable_t *var);
void cone(variable_t *var);
#endif