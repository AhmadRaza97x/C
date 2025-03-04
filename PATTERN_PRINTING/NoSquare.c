#include<stdio.h>

    // PATTERN
    // 1 2 3
    // 1 2 3 
    // 1 2 3

int main()
{
    int n;
    printf("ENTER ROWS & COLUMNS : ");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++)    
    {                                   //ALWAYS USE DIFFERENT VARIABLE IN NESTED LOOP
        for (int j = 1; j <=n; j++)  
            printf("%d ",j);

        printf("\n");
    }
    
    return 0;
}
