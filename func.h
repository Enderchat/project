#ifndef _FUNK_H_
#define _FUNK_H_
#include <stdio.h>
#include <stdlib.h>


void set_mass(const int a[], const  int size);
void set_mass2(const int b[],const int size);
void print_mass(const int a[], const int size);
void mass_switch(const int a[], const int size);
void mass_lenght(const int a[], const int size);
int mass_maximum(const int a[], const int size);
int mass_minimum(const int a[], const int size);
int search_elementa(const int a[], const int size);
int equal(const int a[], const int size, const int b[]);

#endif //_FUNC_H_