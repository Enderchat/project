#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#define ROWS 2
#define COLS 2

int main() 
{
    matrixt_t matrix = allocate_matrix(ROWS, COLS);
    matrixt_t neo = allocate_matrix(ROWS, COLS);
    set_matrix(&neo);
    printf("\n");
    /* print_matrix(&neo);
    printf("\n");
    set_matrix(&matrix);
    printf("\n");
    print_matrix(&matrix);
    printf("\n");

    printf("\n %d \n", eq_matrix(&neo, &matrix));

    matrixt_t tmp = sum_matrix(&neo, &matrix);
        print_matrix(&tmp);
    printf("\n");

    matrixt_t tmp2 = qur_matrix(&neo, &matrix);
        print_matrix(&tmp2);
    printf("\n"); */

    qur_matrix_chislo(&neo, 10);
        print_matrix(&neo);
}
