#include<stdio.h>
int main()
{
    int a[4] = {10,20,30,40};
    int *p;
    p = &a[2];
    printf("%d",*--p);
    *--p;
    ++p;
    printf("%d",*++p);
    return 0;
}
