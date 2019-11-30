/*
  C program to do basic operators.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float add(float op1, float op2){return op1+op2;}
float substract(float op1, float op2){return op1-op2;}
float multiply (float op1, float op2){return op1*op2;}
float divide(float op1, float op2){return op1/op2;}
float power(float op1, float op2){return pow(op1,op2);}

int main(int argc, char *argv[])
{
    // check number of arguments (must be 4)
    if(argc !=4){
        printf("Usage: calculator <operator> <operand1> <operand2>\n");
        return -1; // return with error code -1
    }

    // if argc == 4
    // argv[0] = name, argv[1] = operator, argv[2] = op1, argv[3] = op2
    float op1 = atof(argv[2]); //ascii to float (atof need stdlib.h)
    float op2 = atof(argv[3]);

    //printf("op1: \"%.2f\", op2: \"%.2f\"\n",op1,op2);

    float result;
    // switch can only use with integer so we use if else
    // strcmp check which letter comes first ;letter by letter
    if (strcmp(argv[1],"add") == 0){    // <0 : 1<2, 0 : equal, >0 : 2<1
        result = add(op1,op2);
        printf("Calculate: %.2f + %.2f\n",op1,op2);
        printf("Result: %.2f\n",result);
    }
    else if (strcmp(argv[1],"sub") == 0){
        result = substract(op1,op2);
        printf("Calculate: %.2f - %.2f\n",op1,op2);
        printf("Result: %.2f\n",result);
    }
    else if (strcmp(argv[1],"mul") == 0){
        result = multiply(op1,op2);
        printf("Calculate: %.2f x %.2f\n",op1,op2);
        printf("Result: %.2f\n",result);
    }
    else if (strcmp(argv[1],"div") == 0 ){
        result = divide(op1,op2);
        printf("Calculate: %.2f / %.2f\n",op1,op2);
        if (op2 != (float)0)
            printf("Result: %.2f\n",result);
        if (op2 == (float)0)
            printf("Result: inf\n");
    }
    else if (strcmp(argv[1],"pow") == 0){
        result = power(op1,op2);
        printf("Calculate: %.2f ^ %.2f\n",op1,op2);
        printf("Result: %.2f\n",result);
    }
    else{
        printf("Error: operator must be \"add\", \"sub\", \"mul\", \"div\", \"pow\"\n");
        return -2; //return with error code -2
    }
    return 0; // return with no error
}

