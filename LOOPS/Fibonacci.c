#include<stdio.h> 

    // 1,1,2,3,5,8...nth term
    // nth term = (nth-1)term + (nth-2)term

int main()
{   
    int n;
    printf("ENTER n : ");
    scanf("%d",&n);
    
    int a=1;
    int b=1;
    int sum =1;

    for ( int i = 1; i <= n-2; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("%dth FIBONACCI NO. IS : %d",n,sum);    

    return 0;
}