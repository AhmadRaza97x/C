#include<stdio.h>

    // PASCAL TRIANGLE USINF FUN
    //         1            //          0C0
    //        1 1           //        1C0 1C1
    //       1 2 1          //      2C0 2C1 2C2
    //      1 3 3 1         //    3C0 3C1 3C2 3C3 
    //     1 4 6 4 1        //  4C0 4C1 4C2 4C3 4C4 
    
int factorial(int x)
{
    int fact=1;

    for (int i = 1; i <=x; i++)
        fact=fact*i;

    return fact;
}
int combination(int n,int r)
{
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
   
int main()
{
    int n;
    printf("ENTER N : ");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++)
    {
        for ( int space = 0; i < n-space; space++)
            printf(" ");
        
        for (int j = 0; j <= i; j++)
        {
            int icj=combination(i,j);
            printf("%d ",icj);
        }

        printf("\n");
    }
    
    return 0;
}
