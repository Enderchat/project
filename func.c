#include "func.h"
#include <stdio.h>
#include <stdlib.h>

// пиши логические название функций и пременных
void set_array(int *array, const unsigned int size){
    int i = 0;
    for(unsigned i = 0; i < size; i++){
        scanf("%d", &array[i]);
        setbuf(stdin, NULL);
    }
}
// delete
void set_mass2(const int b[],const unsigned int size){
    int i = 0;
    for(i = 0; i < size; i++){
        scanf("%d", &b[i]);
        setbuf(stdin, NULL);
    }
}

void print_mass(const int a[],const int size){
    int i = 0;
    for(i = 0; i < size; i++){
        printf("%d", a[i]);
    }
    printf("\n");
}
// 
int mass_maximum(const int a[],const unsigned int size){
    int maximum = a[0];
    for(int unsigned i = 1; i < size; i++){
        if(maximum < a[i]){
           maximum = a[i]; 
        }
    }
    return maximum;
}

int mass_minimum(const int a[],const int size)
{
    int minimum = 0;
    int i = 0;
    for(i = 0; i < size; i++){
        if(a[1] < a[i++]){
            minimum = a[i];
        }
    }
    return minimum;
}

void mass_switch(const int a[],const int size)
{
    // второй массив не нужен, мы меняем переданный
    // пример:
    /*
     int go = array[0];
        for (unsigned int i = 0, j = size - 1; i < size / 2; ++i, --j) {
            array[i] = array[j];
            array[j] = go;
            go = array[i + 1]; 
      
    */
    int a2[size];
    int length = size - 1;
    for(int i = 0; i < size; i++){
        a2[i] = a[length];
        length--;
    }
    print_mass(a2, size);
}

int search_elementa(const int a[],const int size){
    int element = 0; 
    printf("Vvedi element massiva");
    scanf("%d", &element);
    setbuf(stdin,NULL);
    for (int i = 0; i < size; i++){
        if (element == a[i]){
            return element;
        }
    }
    return 0;
}
void equal(const int a[], const int size, const int b[]){
    for (int i = 0; i < size; i++){
        if (a[i] == b[i]){
            printf("etot element shoz %d", a[i]);
        }
    }
}
