/*
  C program to simulate flipping a single coin how many times user decide
  , record the outcomes and count the number of heads and tails.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,h=0,t=0,i=0;
    printf("How many times you want to flip the coin? : ");
    scanf("%d",&n);

    srand(time(NULL));
    int result = rand()%2;

    printf("\t");
    while(i<n){
        result = rand()%2;

    if(result == 0){
        printf("Heads ");
        h++;
    }
    else{
        printf("Tails ");
        t++;
    }

    i++;
    }

    printf("\nHeads %d times.\n", h);
    printf("Tails %d times.\n", t);

   return 0;
}
