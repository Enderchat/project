#include "func.h"
#define SIZE 10


int main() 
{
    int a[SIZE];
    int b[SIZE];

    set_mass(a, SIZE);
    printf("\n");
    print_mass(a, SIZE);
    printf("\n %d",  mass_maximum(a, SIZE));
    printf("\n %d", mass_minimum(a, SIZE));
    printf("\n");
    mass_switch(a, SIZE);
    printf("\n %d", search_elementa(a, SIZE));
    set_mass2(b, SIZE);
    printf("\n %d", equal(a, SIZE, b));
    
}
