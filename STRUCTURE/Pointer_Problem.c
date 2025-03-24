#include<stdio.h>

    // int x=3, y=4;           // CORRECT
    // int* a=&x, b=&y;        // ERROR
    // int* c,d;               // int* c AND int d

typedef int* pointer;
int main()
{
    int x=3, y=4;           
    pointer a=&x,b=&y;

    printf("%p\n",a);
    printf("%p\n",b);
   
    return 0;
}
