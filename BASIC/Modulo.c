#include <stdio.h>

    // FIND REMAINDER

int main()
{
    int a, b;                    // a>b //IF b>a THEN a % b = a

    printf("ENTER A : ");
    scanf("%d", &a);

    printf("ENTER B : ");
    scanf("%d", &b);

    int r = a % b;               // MODULO OPERATOR

    printf("REMAINDER IS : %d", r);

    return 0;
}
