#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Student Struct 
typedef struct{
    char id[10], name[30], tel[11], gmail[30];
    int age;
}Student;

//pre-defined function
void inputData();
//FILE Handle function
void writeFile(char id[], char name[], int age, char gmail[], char tel[]);


int main(){

    char decision;

    scanf("%c", &decision);

    if(decision == 'A')
        printf("AAA");
    else if (decision == 'L')
        printf("LLL");
        
    return 0;
}

void inputData(){
    int amount;
    int i; //loop control

    printf("Please Enter amount od Data : ");
    scanf("%d", &amount);

    Student stu;

    for(i = 0; i < amount; i++){
        //ID
        printf("Enter ID : ");
        scanf("%s", stu.id);

        //NAME
        printf("Enter Name : ");
        scanf("%s", stu.name);

        //AGE
        printf("Enter Age : ");
        scanf("%d", &stu.age);

        //GMAIL
        printf("Enter Gmail : ");
        scanf("%s", stu.gmail);

        //TEL
        printf("Enter Tel : ");
        scanf("%s", stu.tel);

        writeFile(stu.id, stu.name, stu.age, stu.gmail, stu.tel);
    }
}

void writeFile(char id[], char name[], int age, char gmail[], char tel[]){
    FILE *opn;
    opn = fopen("StudentData.txt","a");

    fprintf(opn,"%s\t\t%s\t\t%d\t\t%s\t\t%s\n",id, name, age, gmail, tel);

    fclose(opn);
}