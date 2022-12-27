/*
** EPITECH PROJECT, 2020
** 104intersection
** File description:
** main
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include"include/my.h"

void display_mess_error(void)
{
    printf("USAGE\n    ./104intersection opt xp yp zp xv yv zv p\n\nDESCRIPTION\n");
    printf("    opt             surface option: 1 for a sphere, 2 for a cylinder, 3 for a cone\n");
    printf("    (xp, yp, zp)    coordinates of a point by which the light ray passes through\n");
    printf("    (xv, yv, zv)    coordinates of a vector parallel to the light ray\n");
    printf("    p               parameter: radius of the sphere, radius of the cylinder, or angle formed by the cone and the Z-axis\n");
}

int main(int ac, char **av)
{   
    int i = 1;

    if (ac == 1){
        display_mess_error();
        exit(84);
    }
//gestion -h
    if (av[1][0] == '-' && av[1][1] == 'h' && ac == 1){
        display_mess_error();
        exit(20);
    }
///gestion nb arg incorrect
    if (ac != 9){
        display_mess_error();
        exit(84);
    }
//GESTION ac == 9
    if (ac == 9){
    // gestion opt incorrect
        if (av[1][0] != '1' && av[1][0] != '2' && av[1][0] != '3'){
            printf("1 for a sphere, 2 for a cylinder, 3 for a cone\n");
            exit(84);
        }        
        if (av[6] == av[7] && av[6] == av[8]){
            printf("vector nul\n");
            exit(84);
        }
    // gestion arg != nb
        while (i < ac){
            if(verif_str_int(av) != 0){
                printf("les arguments doivent etre des nombres.\n");
                exit(84);
            }
            else{
                i++;
            }
        }
    //vecteur null
        if (av[5] == av[6] && av[6] == av[7]){
            printf("le vecteur ne doit pas etre nul\n");
            exit(84);
        }
        else{
            intersection(ac, av);
        }
    }
}