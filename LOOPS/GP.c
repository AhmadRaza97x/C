#include <stdio.h>

        // GP
        
int main()
{
    int A;  //FIRST TERM
    printf("ENTER A : ");
    scanf("%d", &A);

    int R;  //COMMON RATIO
    printf("ENTER R : ");
    scanf("%d", &R);

    int N;  //TOTAL NO. OF TERM
    printf("ENTER N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i = i + 1)
    {
        printf("%d ", A);
        A = A * R;
    }

    return 0;
}