#include "func.h"
#include <stdio.h>
#include <stdlib.h>

void set_mass(int *massiv,const int size){
    int i;
    for(i = 0; i < size; i++){
        scanf("%d", massiv + i);
        setbuf(stdin, NULL);
    }
}

void print_mass(const int massiv[],const int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d", massiv[i]);
    }
    printf("\n");
}

int mass_maximum(const int massiv[],const int size){
    int maximum = massiv[0];
    int i;
    for(i = 1; i < size; ++i){
        if(maximum < massiv[i]){
           maximum = massiv[i]; 
        }
    }
    return maximum;
}

int mass_minimum(const int massiv[],const int size)
{
    int minimum = massiv[0];
    for(int i = 1; i < size; ++i){
        if(minimum > massiv[i]){
            minimum = massiv[i];
        }
    }
    return minimum;
}

void mass_switch(int massiv[],const int size)
{
    int element = 0;
    for(int i = 0, j = size - 1; i < size/2; ++i, --j){
        element = massiv[i];
        massiv[i] = massiv[j];
        massiv[j] = element;
    }
    print_mass(massiv, size);
}

int search_elementa(const int massiv[],const int size, const int number){

    int index = 0;
    for (int i = 0; i < size; ++i){
        if (number == massiv[i]){
            index = i;
            break;
        }
    }
    return index;
}

int equal(const int massiv[], const int size, const int massiv2[], const int size2){
    int res = 1;
    if(size == size2) {
    for (int i = 0; i < size; i++){
        if (massiv[i] != massiv2[i]){
            res = 0;
            break;
        }
    }
    } else {
        res = 0;
    }
    return res;
}
void buble_sort(int massiv[],int size){
    for(int i = 0 ; i < size; ++i){
        for(int j = 0; i <size-1; ++j){
            if (massiv[j] > massiv[j+1]){
                int b = massiv[i];
                b = massiv[j];
                massiv[j] = massiv[j + 1];
                massiv[j + 1] = b;
            }
            
        }
    }
}