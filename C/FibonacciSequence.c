#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int *f,x,y;
    printf("How many sequences? : ");
    scanf("%d",&n);
    n = n + 1;

    f = (int *)malloc(n * sizeof(int));

    //fn = fn-1 + fn-2 ; f0 = 1, f1 = 1
    for(i = 0; i < n; i++){
        *(f + 0) = 0;
        *(f + 1) = 1;
        x = *(f + i-1);
        y = *(f + i-2);
        *(f + i) = x + y;
    }

    for(i = 0; i < n; i++)
    printf("f[%d] = %d\n", i,*(f + i));
    return 0;
}
