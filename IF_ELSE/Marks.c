#include <stdio.h>

    // EXAM GRADE
        
int main()
{
    int x;
    printf("ENTER PERCENTAGE : ");
    scanf("%d", &x);

    if (x > 80)
        printf("GRADE A");

    else if (x > 60)
        printf("GRADE B");

    else if (x > 40)
        printf("GRADE C");

    else
        printf("GRADE D");

    return 0;
}
