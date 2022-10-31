#ifndef _FUNK_H_
#define _FUNK_H_


void set_mass();
void print_mass(const int massiv[], const int size);
void mass_switch(int massiv[], const int size);
void mass_lenght(const int massiv[], const int size);
int mass_maximum(const int massiv[], const int size);
int mass_minimum(const int massiv[], const int size);
int search_elementa(const int massiv[],const int size, const int number);
int equal(const int massiv[], const int size, const int massiv2[], const int size2);
void buble_sort(int massiv[],const int size);

#endif //_FUNC_H_
