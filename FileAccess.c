#include <stdio.h>
#include <conio.h>
#include <string.h>

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