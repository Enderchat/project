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
    for(int i = 1; i < 4; ++i)
    {
     matrix_figure->matrix[i][1]-=1;
    }
}

void move_right(figure_t *matrix_figure){
    for(int i = 0; i < 4; ++i){
        matrix_figure->matrix[i][1]+=1;
    }
}

void move_down(figure_t *matrix_figure){
    for(int i = 0; i < 4; ++i){
        matrix_figure->matrix[i][0]+=1;
    }
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

figure_t copy_figure(figure_t *curr){
    figure_t tmp;
    tmp=allocate_figure(curr->rows, curr->cols);
    tmp.rows = curr->rows;
    tmp.cols = curr->cols;

    for(int i = 0; i < curr->rows; ++i){
        for(int j = 0; j < curr->cols; ++j){
            tmp.matrix[i][j]=curr->matrix[i][j];
        }
    }
    return tmp;
}
void delete_figure(cup_t *matrix, figure_t *figure, figure_t *tmp){
    for(int i = 0; i < figure->rows; ++i){
        matrix->cup[tmp->matrix[i][0]][tmp->matrix[i][1]]= ' ';
    }
}