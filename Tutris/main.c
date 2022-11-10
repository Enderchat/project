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
    int res_down = 0;
    int res_srav = 0;
    int nij = 0;
    int left = 0;
    int right = 0;

    print_matrix(&matrix_cup);
    copy_figure(&matrix_figure, &tmp);
    while(res!= Q)
    {
        
        res = getchar();
        setbuf(stdin, NULL);
        if( res != ENTER) 
        {   
            if(res_srav != 1){
            switch (res)
            {
            case A:

                copy_figure(&matrix_figure, &tmp);
                move_left(&matrix_figure);

            break;

            case S:

                copy_figure(&matrix_figure, &tmp);
                res_down = move_down(&matrix_figure);

            break;

            case D:
                
                copy_figure(&matrix_figure, &tmp);
                move_right(&matrix_figure);

            break;

            case W:

            // povorot

            break;

            case SPACE:

            // fast spusk

            break; 

            default:
            break;

            }
            nij = nij_tochka(&matrix_figure);
    left = left_tochka(&matrix_figure);
    right = right_tochka(&matrix_figure);
    res_srav = proverka_nij(&matrix_cup, nij, left, right);
        }
    }
    if(res_down == 1){
        smashboy(&matrix_figure);
        copy_figure(&matrix_figure, &tmp);
        nij = nij_tochka(&matrix_figure);
        left = left_tochka(&matrix_figure);
        right = right_tochka(&matrix_figure);
        }
    print_matrix(&matrix_cup);
    delete_figure(&matrix_cup, &tmp);
    //random_figure(&matrix_figure);
    add_figure(&matrix_cup, &matrix_figure);
    }
}




