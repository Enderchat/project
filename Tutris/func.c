#include "func.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

cup_t allocate_cup(const int rows,const int cols){
    cup_t matrix_cup;
    matrix_cup.cols = cols;
    matrix_cup.rows = rows;

    matrix_cup.cup = (double**)calloc(rows, sizeof(double));
    for(int i = 0; i < rows; ++i){
        matrix_cup.cup[i] = (double*)calloc(cols, sizeof(double));
    }
    return matrix_cup;
}


figure_t allocate_figure(const int rows,const int cols){
    figure_t matrix_figure;
    matrix_figure.cols = cols;
    matrix_figure.rows = rows;

    matrix_figure.matrix = (double**)calloc(rows, sizeof(double));
    for(int i = 0; i < rows; ++i){
        matrix_figure.matrix[i] = (double*)calloc(cols, sizeof(double));
    }
    return matrix_figure;
}

void menu(cup_t matrix_cup, figure_t *matrix_figure){
    char otvet_igroka;
    printf("Ti prishol poigrat'? (y, n)");
    scanf("%c", otvet_igroka);
    if(otvet_igroka == 'y'){
        random_figure(matrix_cup, &matrix_figure);
    }else{
        printf("pishol nahuy");
    }
}

void random_figure(cup_t matrix_cup, figure_t *matrix_figure)
{
    smashboy(matrix_cup, &matrix_figure);
}

void smashboy(figure_t *matrix_figure)
{
    int **figure_smashboy=(int**)calloc(matrix_figure->rows, sizeof(int*));
    for(int i =  0; i < matrix_figure->rows; ++i){
        figure_smashboy[i]=(int*)calloc(matrix_figure->cols,sizeof(int));
    }
    figure_smashboy[0][0] = 0;
    figure_smashboy[0][1] = 4;
    figure_smashboy[1][0] = 0;
    figure_smashboy[1][1] = 5;
    figure_smashboy[2][0] = 1;
    figure_smashboy[2][1] = 4;
    figure_smashboy[3][0] = 1;
    figure_smashboy[3][1] = 5;
}

void add_figure(cup_t *matrix_cup, figure_t *matrix_figure)
{
    for(int i = 0; i < matrix_figure->rows; ++i){
            matrix_cup->cup[matrix_figure->matrix[i][0]][matrix_figure->matrix[i][1]] = '*';
    }
} 

void analizator_reshenia(cup_t *matrix_cup, figure_t *matrix_figure)
{
    char move;

    printf("Sdviggaem? (l, r)");
    scanf("%c", move);
    switch(move)
    {
    case 'l':
        move_left(&matrix_figure);
        break;
    case 'r':
        move_right(&matrix_figure);
        break;    
    default:
        move_down(&matrix_figure);
        break;
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

void move_dows(figure_t *matrix_figure){
    for(int i = 0; i < 4; ++i){
        matrix_figure->matrix[i][0]+=1;
    }
}

void free_matrix(cup_t *matrix_cup)
{
    for(int i = 0;i < matrix_cup->rows; ++i){
        free(matrix_cup->cup[i]);
    } 
    free(matrix_cup->cup);
}

void print_matrix(cup_t *matrix_cup)
{
    for(int i = 0; i < matrix_cup->rows; ++i){
        for(int j = 0; j < matrix_cup->cols; ++j){  
            printf("_%c_", matrix_cup->cup[i][j]);
        }
        printf("\n");
    }
}