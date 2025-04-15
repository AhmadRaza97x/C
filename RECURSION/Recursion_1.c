#include<stdio.h>

    // RECURSION

void f(int n)
{
    if (n==0)
        return ;
    
    else
    {
        printf("%d",n);
        f(n-1);
        printf("%d",n);
    }
}
 int main ()
{
    f(4);
    printf("\nAHMAD");
}