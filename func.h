#ifndef _FUNK_H_
#define _FUNK_H_

// используемые либы лучше указывать в *.c
#include <stdio.h>
#include <stdlib.h>

// зачем два seta? 
// мы меняем переданный массив(через указатель), а не передаём копию
void set_mass(const int a[], const  int size);
void set_mass2(const int b[],const int size);
//
void print_mass(const int a[], const int size);
// мы меняем массив через указатель
void mass_switch(const int a[], const int size);
// длинну удалить
void mass_lenght(const int a[], const int size);

int mass_maximum(const int a[], const int size);
int mass_minimum(const int a[], const int size);
// где сам аргумент элемента?
int search_elementa(const int a[], const int size);
// где потерял размер второго массива
int equal(const int a[], const int size, const int b[]);

#endif //_FUNC_H_
