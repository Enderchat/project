#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#define ROWS 4
#define COLS 3

int main() 
{
    matrixt_t matrix = allocate_matrix(ROWS, COLS);
    matrixt_t neo = allocate_matrix(ROWS, COLS);
    set_matrix(&neo);
    print_matrix(&neo);
    set_matrix(&matrix);

    printf("%d \n", eq_matrix(&neo, &matrix));
}
