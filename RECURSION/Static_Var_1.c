#include<stdio.h>

  // STATIC VARIABLE

void fun()
{
    int a=0;
    static int b=0;
    ++a;
    ++b;
    printf("%d%d",a,b);
}

void main()
{
    fun();
    int a=10,b=0;
    ++a;
    ++b;
    printf("%d%d",a,b); 
}