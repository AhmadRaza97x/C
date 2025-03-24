#include<stdio.h>

    // PATTERN
    // *
    // * *
    // * * *
    
int main()
{
    int n;
    printf("ENTER ROWS & COLUMNS : ");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++)    
    {                                   //ALWAYS USE DIFFERENT VARIABLE IN NESTED LOOP
        for (int j = 1; j <=i; j++)
            printf("* ");
        
        printf("\n");
    }
    
    return 0;
}


