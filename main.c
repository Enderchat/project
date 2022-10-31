#include "func.h"
#define SIZE 10
#define SIZE2 10
#include <stdio.h>

int main() 
{
    int a[SIZE];
    int b[SIZE];

    set_mass(&a, SIZE);
    printf("\n");
    print_mass(a, SIZE);
    printf("\n %d",  mass_maximum(a, SIZE));
    printf("\n %d", mass_minimum(a, SIZE));
    printf("\n");
    mass_switch(a, SIZE);
    printf("\n etot element zanyt %d", search_elementa(a, SIZE, 10));
    set_mass(&b, SIZE2);
    printf("\n %d", equal(a, SIZE, b, SIZE2));
    
}

