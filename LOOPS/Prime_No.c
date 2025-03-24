#include <stdio.h>

    // NO. IS PRIME OR COMPOSITE
    // BREAK STATEMENT

int main()
{
    int N;
    printf("ENTER N : ");
    scanf("%d", &N);

    int A = 0;

    for (int i = 2; i <= N - 1; i = i + 1)
    {
        if (N % i == 0)
        {
            A = 1;
            break;      // LOOP KHTM KR DETA HAI
        }
    }

    if (N == 1)
        printf("NEITHER PRIME NOR COMPOSITE");

    else if (A == 0)
        printf("PRIME");

    else
        printf("COMPOSITE");

    return 0;
}