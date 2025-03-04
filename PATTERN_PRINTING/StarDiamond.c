#include<stdio.h>

    // PATTERN
    //      *
    //     ***
    //    *****
    //     ***
    //      *
    
int main()
{
    int n;
    printf("ENTER ROW : ");
    scanf("%d",&n);
    int space=n/2;
    int star=1;

    for (int row = 1; row <= n; row++)
    {
        for (int i= 1; i <=space; i++)
            printf(" ");

        for (int j= 1; j <= star; j++)
            printf("*");
        
        if (row<n/2+1)
        {
           space--;
           star+=2;
        }

        else
        {
            space++;
            star-=2;
        }

        printf("\n");
    }

    return 0;
}