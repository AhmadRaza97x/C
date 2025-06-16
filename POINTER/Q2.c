#include<stdio.h>
int main()
{
    int a[4] = {10,20,30,40};
    int *p[4] = {a+2,a,a+1,a+3};
    int **q;
    q = &p[0];
    *++*++q;
    --q;
    printf("%d",*--*++q);
    return 0;
}
