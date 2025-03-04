#include<stdio.h>

    // POINTER *VAR KA MTLB

int main()
{
    int a=25;
    int *x=&a;      // A K ADDRESS PE JAO USKI VALUE LAO
    int **y=&x;     // X K ADD PE WHA SE A ADD PE VALUE LAO
    int ***z=&y;    // Y K AAD PE ,X K AAD , A K ADD VALUE LAO
    
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d\n",***z);

    return 0;
}
