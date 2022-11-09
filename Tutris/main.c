#include "func.h"
#include <stdio.h>
#define ROWS_CUP 20
#define COLS_CUP 10
#define ROWS_FIGURE 4
#define COLS_FIGURE 2

int main() 
{
    cup_t matrix_cup = allocate_cup(ROWS_CUP, COLS_CUP);
    figure_t matrix_figure = allocate_figure(ROWS_FIGURE, ROWS_FIGURE);
    menu(matrix_cup, &matrix_figure);
    add_figure(matrix_cup, &matrix_figure);

}

