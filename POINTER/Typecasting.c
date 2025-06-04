#include<stdio.h>
int main()
{
    int x = 20;
    // int x = 300;
    // int x = 130;
    char *p = (char*)&x;
    printf("%d",*p);
    return 0;
}
