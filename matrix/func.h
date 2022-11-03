#ifndef _FUNK_H_
#define _FUNK_H_

typedef struct 
{
    double **matrix;
    int rows;
    int cols; 

}matrixt_t;

matrixt_t allocate_matrix(const int rows,const int cols);
void print_matrix(matrixt_t *matrix);
void set_matrix(matrixt_t *matrix);
void free_matrix(matrixt_t *matrix);
int eq_matrix(matrixt_t *matrix, matrixt_t *matrix2);

#endif //_FUNC_H_
