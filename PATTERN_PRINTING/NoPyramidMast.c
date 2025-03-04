#include<stdio.h>

    // PATTERN
    // 12321
    // 12 21
    // 1   1

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);
    n-=1;

    int space = 1;
    int num = n;
    int x=1;

    for (int i=1 ; i<=2*n+1 ; i++)
    {
        printf("%d",x);
        if (i<=n)
            x++;
        else
            x--;
    }

    printf("\n");
    
    for (int row=1 ; row<=n ; row++)
    {
        int a=0;

        for (int j=1 ; j<=num ; j++)
        {
            a++;
            printf("%d",a);
        }

        for (int k=1 ; k<=space ; k++)
            printf(" ");

        for (int j=1 ; j<=num ; j++)
        {
            printf("%d",a);
            a--;
        }

        num--;
        space+=2;
        printf("\n");
    }

    return 0;
}
