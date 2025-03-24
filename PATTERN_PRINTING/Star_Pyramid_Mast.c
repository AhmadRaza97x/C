#include<stdio.h>

    // PATTERN
    // *****
    // ** **
    // *   *

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    int space = 1;
    int star = n;

    for (int i=1 ; i<=2*n+1 ; i++)
        printf("*");

    printf("\n");
    
    for (int row=1 ; row<=n ; row++)
    {
        for (int j=1 ; j<=star ; j++)
            printf("*");

        for (int k=1 ; k<=space ; k++)
            printf(" ");

        for (int j=1 ; j<=star ; j++)
            printf("*");

        star--;
        space+=2;
        printf("\n");
    }

    return 0;
}
