#include <stdio.h>

        // AP
        
int main()
{
    int A;  //FIRST TERM
    printf("ENTER A : ");
    scanf("%d", &A);

    int D;  //COMMON DIFFERENCE 
    printf("ENTER N : ");
    scanf("%d", &D);

    int N;  //TOTAL NO. OF TERMS
    printf("ENTER N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i = i + 1)
    {

        int X=A+(i-1)*D;
        printf("%d ", X);
    }

    return 0;
}