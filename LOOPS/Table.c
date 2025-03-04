#include <stdio.h>

        // TABLE OF ANY NO.
        
int main()
{
    int N;
    printf("ENTER N : ");
    scanf("%d",&N);

    for (int i = 1; i <= 10; i = i + 1)     //RAPEAT KRATA HAI
    {
        int x = i * N;
        printf("%d ", x);
    }

    return 0;
}