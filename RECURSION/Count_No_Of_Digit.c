#include<stdio.h>

    // COUNT NO. OF DIGITS OF GIVEN NO.
    // BY RECURSION

int f(int a)
{
    if (a==0)
        return 0;
    else
        return 1+f(a/10);
}

int main()
{
   int n;
   printf("ENTER N : ");
   scanf("%d",&n);
   int result = f(n); 
   printf("%d",result);
}
