#include<stdio.h>

    // USING RECURSION
    // DECREASING NATURAL NO.

void natural(int x)
{
    if (x==1)
        printf("%d ",x);
        
    else
    {
        natural(x-1);         // YE 1 SE N TK PRINT KREGA
        printf("%d ",x);
        // natural(x-1);      // YE N SE 1 TK PRINT KREGA
    }
}

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    natural(n);
   
    return 0;
}
