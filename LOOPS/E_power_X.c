#include<stdio.h>

    // E POWER X = 1 + (X/1!) + ((X*X)/2!) + ((X*X*X)/3!) +......INFINITE

int main()
{
    float x,p,sum,f,p1,f1,n;

    printf("ENTER N : ");   // N = KITTE TERM TAK VALUE CHAHIYE
    scanf("%f",&n);

    printf("ENTER X : ");   // X = X KI VALUE
    scanf("%f",&x);

    sum=0.0;

    for (int i = 0; i <=(n-1); i++)
    {
        p=1;
            for ( int j = 1; j <=i; j++)
            {
                p=p*x;    // P1 = X KI POWER
                p1=p;
            }

        f=1;
            for (int k = 1; k <=i; k++)
            {
                f=f*k;
                f1=f;     // F1 = FACTORIAL
            }

        sum =sum +(p1/f1);
    }

    printf("%.1f",sum);
    
    return 0;
}