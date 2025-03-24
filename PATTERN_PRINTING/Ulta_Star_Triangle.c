#include<stdio.h>

    // PATTERN
    // *****
    //   ***
    //    **
    //     *
    
int main()
{
    int n;
    printf("ENTER ROW : ");
    scanf("%d",&n);
    int space=0;
    int star=n;

    for (int row = 1; row <= n; row++)
    {
        for (int i= 1; i <=space; i++)
            printf(" ");

        for (int j= 1; j <= star; j++)
            printf("*");
        
        space+=2;
        star-=2;

        printf("\n");
    }
    
    return 0;
}