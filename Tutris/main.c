#include "func.h"
#include <stdio.h>
#define ROWS_CUP 20
#define COLS_CUP 10
#define ROWS_FIGURE 4
#define COLS_FIGURE 2

#define A 97
#define S 115
#define D 100
#define Q 113
#define W 119
#define SPACE 32
#define ENTER 10


int main() 
{
    cup_t matrix_cup = allocate_cup(ROWS_CUP, COLS_CUP);
    figure_t matrix_figure = allocate_figure(ROWS_FIGURE, ROWS_FIGURE);
    smashboy(&matrix_figure);
    figure_t tmp = allocate_figure(ROWS_FIGURE, ROWS_FIGURE);

    int res = 0;
    while(res!= Q){
        res = getchar();
        setbuf(stdin, NULL);
        if( res != ENTER) {
        switch (res)
        {
        case A:
            tmp = copy_figure(&matrix_figure);
            move_left(&matrix_figure);
            print_matrix(&matrix_cup);
            delete_figure(&matrix_cup, &matrix_figure, &tmp);

        break;
        case S:
            tmp = copy_figure(&matrix_figure);
            move_down(&matrix_figure);
            print_matrix(&matrix_cup);
            delete_figure(&matrix_cup, &matrix_figure, &tmp);
        break;
        case D:
            tmp = copy_figure(&matrix_figure);
            move_right(&matrix_figure);
            print_matrix(&matrix_cup);
            delete_figure(&matrix_cup, &matrix_figure, &tmp);
        break;
        case W:
        // povorot
        break;
        case SPACE:
        // fast spusk
        break;    
        default:

     
        }
        //random_figure(&matrix_figure);
        add_figure(&matrix_cup, &matrix_figure);
        }
    }
// free figure, cup
}


