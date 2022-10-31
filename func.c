#include "func.h"
#include <stdio.h>
#include <stdlib.h>

void set_mass(int *a,const int size){
    int i;
    for(i = 0; i < size; i++){
        scanf("%d", a[i]);
        setbuf(stdin, NULL);
    }
}

void print_mass(const int a[],const int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d", a[i]);
    }
    printf("\n");
}
int mass_maximum(const int a[],const int size){
    int maximum = a[0];
    int i;
    for(i = 0; i < size; i++){
        if(maximum < a[i]){
           maximum = a[i]; 
        }
    }
    return maximum;
}
int mass_minimum(const int a[],const int size)
{
    int minimum = a[1];
    for(int i = 0; i < size; i++){
        if(minimum > a[i]){
            minimum = a[i];
        }
    }
    return minimum;
}

void mass_switch(const int a[],const int size)
{
    int a2[size];
    int length = size - 1;
    for(int i = 0; i < size; i++){
        a2[i] = a[length];
        length--;
    }
    print_mass(a2, size);
}
int search_elementa(const int a[],const int size,int element){

    int element = 0;
    printf("Vvedi element massiva: ");
    scanf("%d", &element);
    setbuf(stdin,NULL);
    for (int i = 0; i < size; i++){
        if (element == a[i]){
            return element;
        }
    }
    return 0;
}
int equal(const int a[], const int size, const int b[], const int size2){
    for (int i = 0; i < size; i++){
        if (a[i] == b[i]){
            printf("etot element shoz %d", a[i]);
        }
    }
}
