#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


cup_t allocate_cup(const int rows,const int cols){
    cup_t matrix_cup;
    matrix_cup.cols = cols;
    matrix_cup.rows = rows;

    matrix_cup.cup = (char**)calloc(rows, sizeof(char*));
    for(int i = 0; i < rows; ++i){
        matrix_cup.cup[i] = (char*)calloc(cols, sizeof(char));
    }

    for(int i = 0; i < matrix_cup.rows; ++i){
        for(int j = 0; j < matrix_cup.cols; ++j){
        matrix_cup.cup[i][j] = ' ';
        }
    }
    return matrix_cup;

}


figure_t allocate_figure(const int rows,const int cols){
    figure_t matrix_figure;
    matrix_figure.cols = cols;
    matrix_figure.rows = rows;

    matrix_figure.matrix = (int**)calloc(rows, sizeof(int));
    for(int i = 0; i < rows; ++i){
        matrix_figure.matrix[i] = (int*)calloc(cols, sizeof(int));
    }
    return matrix_figure;
}



void random_figure(figure_t *matrix_figure)
{
    smashboy(matrix_figure);
}

void smashboy(figure_t *matrix_figure)
{
    matrix_figure->matrix[0][0] = 0;
    matrix_figure->matrix[0][1] = 4;
    matrix_figure->matrix[1][0] = 0;
    matrix_figure->matrix[1][1] = 5;
    matrix_figure->matrix[2][0] = 1;
    matrix_figure->matrix[2][1] = 4;
    matrix_figure->matrix[3][0] = 1;
    matrix_figure->matrix[3][1] = 5;
}

void add_figure(cup_t *matrix_cup, figure_t *matrix_figure)
{
    for(int i = 0; i < matrix_figure->rows; ++i){
            matrix_cup->cup[matrix_figure->matrix[i][0]][matrix_figure->matrix[i][1]] = '*';
    }
} 


void move_left(figure_t *matrix_figure){
int res_l = 0;
     for(int i = 0; i < matrix_figure->rows; ++i)
    {
            if(matrix_figure->matrix[i][1] == 0){
                res_l = 1;
                break;
            
        }
    }
    if(res_l == 0 ){
        for(int i = 0; i < matrix_figure->rows; ++i){
            matrix_figure->matrix[i][1]-=1;
        }
    }
}

void move_right(figure_t *matrix_figure){
    int res_r = 0;
    for(int i = 0; i < matrix_figure->rows; ++i)
    {
        for(int j = 0; j < matrix_figure->cols; ++j)
        {
            if(matrix_figure->matrix[i][j] == COLS_CUP-1)
            {
                res_r = 1;
                break;
            }
        }
    }
    if(res_r == 0 ){
        for(int i = 0; i < matrix_figure->rows; ++i){
            matrix_figure->matrix[i][1]+=1;
        }
    }
}

int move_down(figure_t *matrix_figure){
    int res_down = 0;
    for(int i = 0; i < matrix_figure->rows; ++i)
    {
        for(int j = 0; j < matrix_figure->cols; ++j)
        {
            if(matrix_figure->matrix[i][j] == ROWS_CUP-1)
            {
                res_down = 1;
                break;
            }
        }
    }
        if(res_down != 1){
            for(int i = 0; i < matrix_figure->rows; ++i){
                matrix_figure->matrix[i][0]+=1;
        }
    }
    return res_down;
}
   





void print_matrix(cup_t *matrix_cup)
{
    for(int i = 0; i < matrix_cup->rows; ++i){
        for(int j = 0; j < matrix_cup->cols; ++j){  
            printf(" %c ", matrix_cup->cup[i][j]);
        }
        printf("\n");
    }
}

void copy_figure(figure_t *curr, figure_t *next){

    for(int i = 0; i < curr->rows; ++i){
        for(int j = 0; j < curr->cols; ++j){
            next->matrix[i][j]=curr->matrix[i][j];
        }
    }
}

void delete_figure(cup_t *matrix, figure_t *tmp){
    for(int i = 0; i < tmp->rows; ++i){
        matrix->cup[tmp->matrix[i][0]][tmp->matrix[i][1]]= ' ';
    }
}

int nij_tochka(figure_t *matrix_figure){
    int nij = matrix_figure->matrix[0][0];
    for(int i = 0; i < matrix_figure->rows; ++i){
            if(nij < matrix_figure->matrix[i][0]){
                nij = matrix_figure->matrix[i][0];
            
        }
    }
    return nij;
}

int left_tochka(figure_t *matrix_figure){
    int left = matrix_figure->matrix[0][1];
    for(int i = 0; i < matrix_figure->rows; ++i){
        if(left > matrix_figure->matrix[i][1]){
            left = matrix_figure->matrix[i][1];
        }
    }
    return left;
}

int right_tochka(figure_t *matrix_figure){
    int right = matrix_figure->matrix[0][1];
    for(int i = 0; i < matrix_figure->rows; ++i){
        if(right < matrix_figure->matrix[i][1]){
            right = matrix_figure->matrix[i][1];
        }
    }
    return right;
}

int proverka_nij(cup_t *matrix_cup, int nij, int left, int right){
    int res_srav = 0;
    if(nij != 19){
        if(matrix_cup->cup[nij+1][left] == '*' && matrix_cup->cup[nij+1][right] == '*'){
            res_srav = 1;
        }
    }
    return res_srav;
}


 /*int proverka_linii(cup_t matrix_cup){
    for (int i = ROWS_CUP; i < ROWS_CUP-(ROWS_CUP-1); --i)
    {
        for(int j = COLS_CUP; j < )
    }
    
}*/