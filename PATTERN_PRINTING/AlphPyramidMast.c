#include<stdio.h>

    // PATTERN
    // ABCDE
    // AB DE
    // A   E

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);
    n-=1;

    int space = 1;
    int alph = n;

    int b=65;

    for (int i=1 ; i<=2*n+1 ; i++)
    {
        printf("%c",b);
        b++;
    }
    
    printf("\n");
    
    for (int row=1 ; row<=n ; row++)
    {
        int a=65;

        for (int j=1 ; j<=alph ; j++)
        {
            printf("%c",a);
            a++;
        }

        for (int k=1 ; k<=space ; k++)
        {
            printf(" ");
            a++;
        }

        for (int j=1 ; j<=alph ; j++)
        {
            printf("%c",a);
            a++;
        }

        alph--;
        space+=2;
        printf("\n");
    }

    return 0;
}
