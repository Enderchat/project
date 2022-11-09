#include "func.h"
#include <stdio.h>
#include <stdlib.h>


matrixt_t allocate_matrix(const int rows,const int cols){
    matrixt_t neo;
    neo.cols = cols;
    neo.rows = rows;

    neo.matrix = (double**)calloc(rows, sizeof(double));
    for(int i = 0; i < rows; ++i){
        neo.matrix[i] = (double*)calloc(cols, sizeof(double));
    }
    return neo;
}

void print_matrix(matrixt_t *matrix){
    for(int i = 0; i < matrix->rows; ++i){
        for(int j = 0; j < matrix->cols; ++j){  
            printf("_%.2f_", matrix->matrix[i][j]);
        }
        printf("\n");
    }
}

void set_matrix(matrixt_t *matrix){
   for(int i = 0; i < matrix->rows; ++i){
        for(int j = 0; j < matrix->cols; ++j){  
           scanf("%lf", &matrix->matrix[i][j]);
        }
    }
}

void free_matrix(matrixt_t *matrix){
    for(int i = 0;i < matrix->rows; ++i){
        free(matrix->matrix[i]);
    } 
    free(matrix->matrix);
}

int eq_size_matrix(matrixt_t *matrix, matrixt_t *matrix2){
    
int res = 0;

if((matrix->cols == matrix2->cols) && (matrix->rows == matrix2->rows)){
    res = 1;
    }
    return res;
}

int eq_matrix(matrixt_t *matrix, matrixt_t *matrix2){
    
    int res = 0;

        if((matrix->cols == matrix2->cols) && (matrix->rows == matrix2->rows)){
            for(int i = 0; i < matrix->rows; ++i){
                for(int j = 0; j < matrix->cols; ++j){
                    if(matrix->matrix[i][j] == matrix2->matrix[i][j]){
                    res = 1;
                }else{
                    res = 0;
                    break;
                }
                if(res == 0){
                    break;
                }
            }
        }
    }
    return res;
}

matrixt_t sum_matrix(matrixt_t *matrix, matrixt_t *matrix2){
    matrixt_t neo;
    if(eq_size_matrix(matrix,matrix2)){
        neo = allocate_matrix(matrix-> rows, matrix->cols);
    for(int i = 0; i < matrix->rows; ++i){
        for(int j = 0; j < matrix->cols; ++j){
            neo.matrix[i][j] = matrix->matrix[i][j] + matrix2->matrix[i][j];
        }
    }
    }
    return neo;
}

matrixt_t qur_matrix(matrixt_t *matrix, matrixt_t *matrix2){
    matrixt_t matrix3;
    if (matrix->cols == matrix->rows){
    matrix3 = allocate_matrix(matrix->rows, matrix2->cols);
        for(int i = 0; i < matrix->rows; ++i){
            for(int j = 0; j < matrix2->cols; ++j){
                for(int k = 0; k < matrix2->cols; ++k){
                matrix3.matrix[i][j] += matrix->matrix[i][j]*matrix2->matrix[j][k];    
                }
            }
        }
    }
    return matrix3;
}
matrixt_t qur_matrix_chislo(matrixt_t *matrix, int chislo){
    matrixt_t matrix;
    matrix = allocate_matrix(matrix->rows, matrix->cols);
    for(int i = 0; i < matrix->rows; ++i){
        for(int j = 0; j < matrix->cols; ++j){
            matrix = matrix->matrix[i][j] * chislo;
        }
    }
    return matrix;
}