#include <stdio.h>
#include <string.h>
#include<conio.h>
#include <stdlib.h>

//Student Struct 
typedef struct{
    char id[10], name[30], tel[11], gmail[30];
    int age;
}Student;

//function for A
void inputData();
void writeFile(char id[], char name[], int age, char gmail[], char tel[]); //file handle
//function for L
void readFile();


int main(){

    char decision;

    printf("A or L : ");
    scanf("%c", &decision);          

    if(decision == 'A'){
        //printf("LLLL");
        inputData();
    }  
    else if (decision == 'L')
        printf("LLL");   
    else
        printf("Enter A and L only !");
        
    return 0;

}

void inputData(){
    int amount;
    int i; //loop control

    system("cls");

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

        writeFile(stu.id, stu.name, stu.age, stu.gmail, stu.tel);
    }
}

void writeFile(char id[], char name[], int age, char gmail[], char tel[]){
    FILE *opn;
    opn = fopen("StudentData.txt","a");

    fprintf(opn,"%s\t\t\t%s\t\t\t%d\t\t\t%s\t\t\t%s\n",id, name, age, gmail, tel);

    fclose(opn);
}