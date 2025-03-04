#include<stdio.h>

    // PRINT EVEN NO.

int main()
{
    int N;      //KHA TK PRINT KRNA HAI
    printf("ENTER N : ");
    scanf("%d",&N);

    for (int i = 2; i <=N; i=i+2)
        printf("%d ",i);
    
    return 0;
}