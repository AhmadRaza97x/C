#include<stdio.h>

    // SUM OF A & B

int add(int x,int y)
{
    return x+y;
}

int main()
{
    int a,b,sum;
    printf("ENTER A & B : ");
    scanf("%d %d",&a,&b);
    
    sum=add(a,b);
    printf("%d",sum);

    return 0;
}
