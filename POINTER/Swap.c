#include<stdio.h>

    // SWAP OF TWO NO. USING POINTER

void swap(int* x, int* y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;

    return;
}

int main()
{
    int a;
    printf("ENTER A : ");
    scanf("%d",&a);

    int b;
    printf("ENTER B : ");
    scanf("%d",&b);

    swap(&a,&b);

    printf("a = %d\n",a);
    printf("b = %d",b);

    return 0;
}
