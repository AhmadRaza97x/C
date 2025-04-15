#include<stdio.h>

    // PATTERN
    // 1
    // 1 2
    // 1 2 3 
    
int main()
{
    int row;
    printf("ENTER ROW : ");
    scanf("%d",&row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ",j);
       
        printf("\n");
    }
    
    return 0;
}