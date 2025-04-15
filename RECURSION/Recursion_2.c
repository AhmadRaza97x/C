#include<stdio.h>

    // QUESTION ON RECURRSION
    
void f(int n)
{
    if (n==0)
        return ;
    
    else
    {
        f(n-1);
        printf("%d",n);
        f(n-1);
        printf("%d",n);
    }
}
 int main ()
{
    f(3);
    printf("\nAHMAD");
}