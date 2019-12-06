#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Student Struct 
typedef struct{
    char id[10], name[30], tel[11], gmail[30];
    int age;
}Student;

//function
void inputData();

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

void inputData(){
    int amount;
    int i; //loop control

    printf("Please Enter amount od Data : ");
    scanf("%d",&amount);

    Student stu;

    for(i=0;i<amount;i++){
        //ID
        printf("Enter ID : ");
        scanf("%s",stu.id);

        //NAME
        printf("Enter Name : ");
        scanf("%s",stu.name);

        //AGE
        printf("Enter Age : ");
        scanf("%d",&stu.age);

        //GMAIL
        printf("Enter Gmail : ");
        scanf("%s",stu.gmail);

        //TEL
        printf("Enter Tel : ");
        scanf("%s",stu.tel);

        //writeFile();
    }
}