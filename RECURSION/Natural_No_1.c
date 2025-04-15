#include<stdio.h>

    // RECURSION
    // NATURAL NO.

void f(int n)
{
    if (n==0)       // BASE CASE
        return ;
    
    else
    {
        f(n-1);     //RECURSIVE STATEMENT
        printf("%d ",n);
    }
}

 int main ()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    f(n);
    printf("\nAHMAD");
}