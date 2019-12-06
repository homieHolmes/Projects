#include <stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>

//Student Struct
typedef struct{
    char id[10], name[30], tel[11], gmail[30];
    int age;
}Student;


// addfunction();
// locatefunction();
//name id phonenumber email
int main(){

    char choose;
    printf("Do you want to add more or locate (A / L) : ");
    scanf("%c",&choose);

    if(strcmp(choose, "A") == 0)
        printf("Adding");
        //Addfunction();
        else if (strcmp(choose, "L") == 0 )
        printf("Locating");
        //Locatefunction();
             
    return 0;
}