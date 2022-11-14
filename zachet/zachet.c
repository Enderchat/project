#include <stdio.h>
#include  <stdlib.h>

#define SIZE_1 5
#define SIZE_2 5

void printf_mass(int *mass, int size);
int* calloc_mass(const int size);
void srav_mass(int a, int b);
void set_mass(int *mass, int size);
int summ_mass(int *mass, int size);
int* odinakovie_element(int *massiv1, int *massiv2, int size1, int size2);
void buble_sort(int *massiv,int size);

int main(){
    int a;
    int b;
    int chislo = 0;
    int size3 = SIZE_1 + SIZE_2;
    int* mass1 = calloc_mass(SIZE_1);
    int* mass2 = calloc_mass(SIZE_2);
    int* mass3 = calloc_mass(size3);

    set_mass(mass1, SIZE_1);
    printf("\n");
    set_mass(mass2, SIZE_2);

    a = summ_mass(mass1, SIZE_1);
    b = summ_mass(mass2, SIZE_2);

    srav_mass(a,b);

    printf("\n");
    mass3 = odinakovie_element(mass1, mass2, SIZE_1, SIZE_2);
    printf_mass(mass3, size3);

}
int* calloc_mass(const int size){
    int *a;

    a = (int*)calloc(size, sizeof(int));

    return a;
}

void set_mass(int *mass, int size){
    for(int i = 0; i < size; ++i){
        scanf("%d", &mass[i]);
    }
}
int summ_mass(int *mass, int size){
    int summ = 0;
    for(int i = 0; i < size; ++i){
        summ += mass[i];
    }
    return summ;
}
void srav_mass(int a, int b){
    if(a == b)
    {
        printf("Massivi ravni");
    }
    else if (a > b)
    {
        printf("massiv 1 bolshe ftorogo na %d ", (a - b));
    }
    else
    {
        printf("massiv 2 bolshe pervogo na %d ", (b - a));
    }
}

int* odinakovie_element(int *massiv1, int *massiv2, int size1, int size2)
{
    int size3 = size1 + size2;
    int *massiv3 = (int*)calloc(size3, sizeof(int));

    for(int i = 0, j = 0; i < size3; ++i, ++j)
    {   
        if(i <= size1){
        massiv3[i]=massiv1[i];
        }
        if(j <= size2){
        massiv3[i+size1]=massiv2[j];
        }
    }
    return massiv3;
}
void printf_mass(int *mass, int size)
{
    for(int i = 0; i < size; ++i){
        printf(" %d ", mass[i]);
    }
}

void buble_sort(int *massiv,int size){
    for(int i = 0 ; i < size-1; ++i){
        for(int j = 0; j <size-i-1; ++j){
            if (massiv[j] > massiv[j+1]){  
                int b = massiv[j];
                massiv[j] = massiv[j + 1];
                massiv[j + 1] = b;
                b = massiv[j + 1];
            }
        }
    }
}
