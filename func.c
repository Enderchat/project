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
        printf(" %d ", massiv[i]);
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
int search_number(const int massiv[],const int size, const int element){
    int index = 0;
    int min = massiv[0];
    int max = massiv[size-1];
    int mid = max/2;
    if(element > massiv[size-1] || element < massiv[0]){
        mid = 0;
    }else{
        while (index != 1)
        {   
            if(element >= mid){
                if(element > mid){
                min = mid;
                mid = (min+max)/2;
                continue;
                }else{
                index = 1;
                
                }
            }else{
                max = mid;
                mid = max/2;
                continue;
                }
            }
        }
        return mid;
    }
