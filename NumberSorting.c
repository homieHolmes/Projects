/*
  C program to sort N numbers in ascending and descending order using pointer
  and print both the given and the sorted array
*/

#include <stdio.h>
#include <stdlib.h>

void descending(int *x, int n);
void ascending(int *x, int n);

int main()
{
    int *ptr, n;

    printf("How many numbers ? :  ");
    scanf("%d",&n);

    ptr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
    printf("Enter number[%d] :  ",i+1);
    scanf("%d",&*(ptr + i));
    }

    descending(ptr, n);
    printf("Descending order : {");
    for(int i = 0; i < n; i++)
        printf("%d%s",*(ptr + i),i<n-1 ? ", " : "}\n" );

    ascending(ptr, n);
    printf("Ascending order : {");
    for(int i = 0; i < n; i++)
        printf("%d%s",*(ptr + i),i<n-1 ? ", " : "}\n" );

    return 0;
}

void descending(int *x, int n){
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(*(x + i) < *(x + j)){
            int temp = *(x + i);
            *(x + i) = *(x + j);
            *(x + j) = temp;
    }
}

void ascending(int *x, int n){
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(*(x + i) > *(x + j)){
            int temp = *(x + i);
            *(x + i) = *(x + j);
            *(x + j) = temp;
    }
}
