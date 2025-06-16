#include<stdio.h>
void fun(int (*p)[3]);
void main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    fun(a);
    printf("%d %d %d",a[1][1],a[1][2],a[2][0]);
}

void fun(int (*p)[3])
{
   ++p;
   (*p)[1] = (*p)[1] + 1;
}
