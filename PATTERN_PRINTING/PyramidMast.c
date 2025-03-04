#include<stdio.h>

    // PATTERN
    //    1
    //  1 2 1
    // 1 2 3 2 1

int main()
{
    int n;
    printf("ENTER ROW : ");
    scanf("%d",&n);

    for (int row = 1; row <= n; row++)
    {
        for (int space = 1; space <= n-row; space++)
            printf("  ");
        
        for ( int num = 1; num <= row; num++)
            printf("%d ",num);
         
        for (int num1 =row-1; num1>=1; num1--)
            printf("%d ",num1);
       
        printf("\n");
    }

    return 0;
}