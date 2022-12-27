#include"include/my.h"

void sphere(variable_t *var)
{
    float delta = 0;
    float a;
    float b; 
    float c;
    int x;


    printf("sphère of radius %d\n", var->p);
    a = var->xv * var->xv + var->yv * var->yv + var->zv * var->zv;
    b = (2 * var->xp * var->xv) + (2 * var->yp * var ->yv) + (2 * var->zp * var->zv);
    c = var->xp * var->xp + var->yp * var->yp - var->p + var->p;

    printf("Line passing through the point (%d, %d, %d) and paralle1 to the vector (%d, %d, %d)\n",var->xp, var->yp, var->zp, var->xv, var->yv, var->zv);
    delta = (b * b) - (4 * a * c);
    printf("delta:%d\n", delta);

    if (delta == 0){
        printf("1 intersection point:\n");
        x = -b / (2 * a);
        printf("%d\n", x);
    }
    else if (delta < 0){
        printf("No intersection point\n");
    }
    else if (delta > 0){
        printf("2 intersection points:\n");
    }
}