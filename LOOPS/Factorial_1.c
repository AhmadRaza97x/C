#include<stdio.h>

    // PRINT FACTORIAL A TO B

int main()
{
    int a,b,n;
    
    printf("ENTER A : ");
    scanf("%d",&a);
    printf("ENTER B : ");
    scanf("%d",&b);

    for ( n = a; n <= b; n++)
    {
        int prod=1;

        for (int i = 1; i <=n; i++)
            prod=prod*i;

        printf("FACTORIAL OF %d IS : %d\n",n,prod);
    }
    
    return 0;
}