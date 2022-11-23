#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10

int* calloc_strok1(const int size);
char* calloc_stroka(const int size);
char set_stroka(char *stroka);
void print_stroka(char *stroka);
char* delete_space(char *stroka);
int* chifri(char *stroka);

int main()
{
    int size = 0;
    int size2 = 0;

    char *strok2 = calloc_stroka(SIZE);
    char *strok  = calloc_stroka(SIZE);
    int *strok3  = calloc_strok1(SIZE);
    set_stroka(strok);
    /* print_stroka(strok);
     memcpy(strok2, strok, size);
    printf("\n");
    print_stroka(strok2);
    memcpy(strok, strok, strlen(strok) - 1);
    printf("\n");
    
    print_stroka(strok);*/

    // printf("\n");

    //strok = delete_space(strok);

    printf("\n");

    strok3 = chifri(strok);
    
}

int* calloc_strok1(const int size)
{
    int *a;

    a = (int*)calloc(size, sizeof(int));
    
    return a;
}

char* calloc_stroka(const int size){
    char *a;

    a = (char*)calloc(size, sizeof(char));
    
    return a;
}

char set_stroka(char *stroka)
{
   
   fgets(stroka, 255, stdin);
   
    
}
void print_stroka(char *stroka)
{
    printf("%s", stroka);
}

char* delete_space(char *stroka)
{
    int res = 0;
    int len = strlen(stroka);
    char *resultat = (char*)calloc(len, sizeof(char));
    int j = 0;


    for(int i = 0; i < len; ++i){
        if(stroka[i] != ' ' && stroka[i] != '\n')
        {
           
           resultat[j]=stroka[i];
           ++j;
           
        }
        else if( j > 0 && (stroka[i] == ' ' ||  stroka[i] == '\n'))
        {
            printf("%s \n", resultat);
            memset(resultat, '\0', len);
                        j = 0;
        }


    }
    return resultat;
}

int* chifri(char *stroka)
{
    int len = strlen(stroka)-1;
    int *resultat = (int*)calloc(len, sizeof(int));
    int j = 0;
    int a = 0;

    for(int i = 0; i < len; ++i)
    {
        if(stroka[i] >= '0' && stroka[i] <= '9')
        {
            resultat[j]=stroka[i];
            ++j;
        }else if( j > 0 && (stroka[i] == ' ' ||  stroka[i] == '\n'))
        {
            printf("%s \n", resultat);
            memset(resultat, '\0', len);
            j = 0;
        }
    }
    
    for(int i = 0; i < len; ++i)
    {
        printf("%d", resultat[i]);
    }
    return resultat;
}
