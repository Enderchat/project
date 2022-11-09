#ifndef _FUNK_H_
#define _FUNK_H_

typedef struct 
{
    char **cup;
    int rows;
    int cols; 

}cup_t;

typedef struct 
{
    int **matrix;
    int rows;
    int cols; 

}figure_t;



cup_t allocate_cup(const int rows,const int cols);
figure_t allocate_figure(const int rows,const int cols);
void menu(cup_t matrix_cup, figure_t *matrix_figure);
void random_figure(cup_t matrix_cup, figure_t *matrix_figure);
void smashboy(figure_t *matrix_figure);
void add_figure(cup_t matrix_cup, figure_t matrix_figure);
void analizator_reshenia(cup_t *matrix_cup, figure_t *matrix_figure);
void move_left(figure_t *matrix_figure);
void move_right(figure_t *matrix_figure);
void move_down(figure_t *matrix_figure);
void free_matrix(cup_t *matrix_cup);
void print_matrix(cup_t *matrix_cup);

#endif //_FUNC_H_
