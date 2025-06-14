#include<stdio.h>

    // FUNCTION POINTER

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int (*p)(int,int); // DECLRATION
    p=&add;            // ASSIGNING
    int sum=(*p)(2,3); // CALLING
    printf("%d",sum);
    return 0;
}
