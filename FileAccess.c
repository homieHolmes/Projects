#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Student Struct 
typedef struct{
    char id[10], name[30], tel[11], gmail[30];
    int age;
}Student;

int main(){

    char choose;

    printf("Do you want to add more or locate (A / L) : ");
    scanf("%c",choose);  

//  system("cls");

    if(choose == 'A')
        printf("AAAA");
            //Addfunction();
        else if (choose == 'L')
        printf("LLLL");
            //Locatefunction();
    




    return 0;
}