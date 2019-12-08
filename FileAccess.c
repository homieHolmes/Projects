#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Student Struct 
typedef struct{
    char id[10], name[30], surname[30], tel[11], gmail[30];
    int age;
}Student;

//function for A
void inputData();
void writeFile(char id[], char name[], int age, char gmail[], char tel[]); //file handle
//function for L
void readFile();
void showFile();


int main(){

    char decision;

    printf("[A]dd or [L]ocate or [S]howfile : ");
    scanf("%c", &decision);          

    if(decision == 'A')
        inputData();    
    else if (decision == 'L')
        printf("LLL");   
    else if (decision == 'S')
        showFile();
    else 
        printf("Enter A and L only !");
        
    return 0;

}

void inputData(){
    int amount;
    int i; //loop control

    system("cls");

    printf("Please Enter amount of Data : ");
    scanf("%d",&amount);

    Student stu;

    for(i=0;i<amount;i++){
        //ID
        printf("Enter ID : ");
        scanf(" %s",stu.id);

        //NAME
        printf("Enter Name : ");
        scanf("%s %s",stu.name,stu.surname);

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

void showFile(){

    system("cls");
    FILE *opn;
    opn = fopen("StudentData.txt","r");
    if(opn == NULL){
        printf("Error opening file.");
        return;
    }

    char line[100];
  while(1) {
      fgets(line, 100, opn);
      if( feof(opn) ) 
         break ;      
      printf("%s", line);
    }

   fclose(opn);   
      
}

