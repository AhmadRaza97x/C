#include<stdio.h>

    // USING RECURSION
    // 3 2 1 1 2 3

void factorial(int x)
{
    if (x==0)
        return;

    else
    {
        printf("%d ",x);      // YE N SE 1 TK PRINT KREGA
        factorial(x-1);       
        printf("%d ",x);      // YE 1 SE N TK PRINT KREGA
    }
}

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    factorial(n);
   
    return 0;
}
