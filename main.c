#include "func.h"
#define SIZE 10
#define SIZE2 10
#include <stdio.h>

int main() 
{
    int massiv[SIZE];
    /*int massiv2[SIZE];*/

    set_mass(&massiv, SIZE);
    printf("\n");
    print_mass(massiv, SIZE);
    /*printf("%d",  mass_maximum(massiv, SIZE));
    printf("\n %d \n", mass_minimum(massiv, SIZE));
    mass_switch(massiv, SIZE);
    printf("\n %d \n", search_elementa(massiv, SIZE, 10));

    set_mass(&massiv2, SIZE2);
    print_mass(massiv2, SIZE);

    buble_sort(massiv, SIZE);
    print_mass(massiv, SIZE);

    printf("\n %s \n", equal(massiv, SIZE, massiv2, SIZE2)?"true":"false");*/
    printf("\n %d \n", search_number(massiv, SIZE, 1));
}

