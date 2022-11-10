#ifndef _FUNK_H_
#define _FUNK_H_
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

void random_figure(figure_t *matrix_figure);
void smashboy(figure_t *matrix_figure);
void add_figure(cup_t *matrix_cup, figure_t *matrix_figure);
void move_left(figure_t *matrix_figure);
void move_right(figure_t *matrix_figure);
int move_down(figure_t *matrix_figure);
void delete_figure(cup_t *matrix, figure_t *tmp);
void print_matrix(cup_t *matrix_cup);
void copy_figure(figure_t *curr, figure_t *next);
int proverka_nij(cup_t *matrix_cup, int nij, int left, int right);
int nij_tochka(figure_t *matrix_figure);
int left_tochka(figure_t *matrix_figure);
int right_tochka(figure_t *matrix_figure);

#endif //_FUNC_H_
