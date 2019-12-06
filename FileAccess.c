#include <stdio.h>
#include <string.h>
#include<stdlib.h>

//Student Struct 
typedef struct{
    char id[10], name[30], tel[11], gmail[30];
    int age;
}Student;



int main(){

    char choose;
    do{
    printf("Do you want to add more or locate (A / L) : ");
    scanf("%c",choose);

    if(choose != 'A' && choose != 'L')
        printf("Please choose only A (for Adding) and L (for Locating).");

    }while(choose != 'A' || choose != 'L');

system("cls");

    if(choose == 'A'){
            //Addfunction();
        else if (choose == 'L')
            //Locatefunction();
    




    return 0;
}