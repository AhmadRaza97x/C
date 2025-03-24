#include<stdio.h>

    // A KI POWER B
    // USING LOG PROPERTY

int power(int a,int b)
{
    if (b==0)
        return 1;
        
    int x=power(a,b/2);

    if (b%2==0)    // YE EVEN POWER K LIYE
        return x*x;

    else                // YE ODD POWER K LIYE   
        return x*x*a;
}

int main()
{
    int a,b;

    printf("BASE A : ");
    scanf("%d",&a);
    printf("POWER B : ");
    scanf("%d",&b);

    int p=power(a,b);
    printf("%d KI POWER %d  ==  %d",a,b,p);

    return 0;
}
