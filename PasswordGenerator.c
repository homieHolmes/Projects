#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int checking(int x);

int main()
{
    int n, i, x=0;
    int *numbers;
    printf("How many characters ? : ");
    scanf("%d",&n);
    numbers = (int *)malloc(n * sizeof(int));

    // current time as seed for random generator
    srand(time(NULL));

    // print n random numbers from 48 to 122
    for(i = 0; i < n; i++ ){
        x = rand() % 123;
        while(x < 35 || checking(x) == -1)
            x = rand() % 123;
        numbers[i] = x;
    }

    printf("Your Password = ");
    for(i = 0; i < n; i++ )
        printf("%c%s",numbers[i], i < n-1 ? "":"\n");

    return(0);
}

//Excluding Ambiguous Characters ( { } [ ] ( ) / \ ' " ` ~ , ; : . < > ) (ASCII CODE : 39-47 58-62 91-96)
int checking(int x){
    int ambiguous[20] = {39, 40, 41, 42, 43, 44, 45, 46, 47, 58, 59, 60, 61, 62, 91, 92, 93, 94, 95, 96};
    for(int i=0; i<20; i++){
        if(ambiguous[i] == x)
            return -1;
    }
    return 0;
}
