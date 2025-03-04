#include<stdio.h>

    // FACTORIAL USING RECURSION

int factorial(int x)
{
    if (x==1 || x==0)
        return 1;
        
    else
        return x*factorial(x-1);
}

int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    int a=factorial(n);
    printf("%d FACTORIAL = %d",n,a);
    
    return 0;
}
