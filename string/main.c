#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10

char* calloc_stroka(const int size);
char set_stroka(char *stroka);
void print_stroka(char *stroka);
char* delete_space(char *stroka);

int main()
{
    int size = 0;
    int size2 = 0;

    char *strok2 = calloc_stroka(SIZE);
    char *strok  = calloc_stroka(SIZE);
    set_stroka(strok);
    /* print_stroka(strok);
     memcpy(strok2, strok, size);
    printf("\n");
    print_stroka(strok2);
    memcpy(strok, strok, strlen(strok) - 1);
    printf("\n");
    
    print_stroka(strok);*/

    // printf("\n");

    strok = delete_space(strok);



    // printf("\n");

    

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
    int len = strlen(stroka)-1;
    char *resultat = (char*)calloc(len, sizeof(char));
    int j = 0;

    for(int i = 0; i < len; ++i){
        if(stroka[i] != ' ')
        {
           
           resultat[j]=stroka[i];
           ++j;
           
        }
        if (resultat[i] == ' ')
        {
            
        }
        {
            if(resultat != )
            {
                printf("%s \n", resultat);
            }
            j = 0;
            memset(resultat, '\0', len);
        }
        if(i == len - 1)
        {
            printf("%s\n", resultat);
        }
    }
    return resultat;
}
