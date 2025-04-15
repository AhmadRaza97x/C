#include<stdio.h>

    // PATTERN
    // 1 2 3..
    // 1 2..
    // 1..
    
int main()
{
    int row;
    printf("ENTER ROW : ");
    scanf("%d",&row);

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)     
            printf("%d ",j);
       
        printf("\n");
    }

    return 0;
}
