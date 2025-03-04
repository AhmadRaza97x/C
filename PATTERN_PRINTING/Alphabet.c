#include<stdio.h>

    // PATTERN
    // A B C D
    // A B C D
    // A B C D
    
int main()
{
    int n;
    printf("ENTER ROWS & COLUMNS : ");
    scanf("%d",&n);
    
    for (int i=1 ; i<=n ; i++)    
    {       
        int a=64;                //ALWAYS USE DIFFERENT VARIABLE IN NESTED LOOP

        for (int j=1 ; j<=n ; j++)  
        {
            a=a+1;
            printf("%c ",a);
        }

        printf("\n");
    }

    return 0;
}