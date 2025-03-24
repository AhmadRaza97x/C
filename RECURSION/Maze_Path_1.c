#include<stdio.h>

    // MAZE PATH
    // LIKE CHESS BORAD
    // METHOD 2 : WITHOUT EXTRA VARIABLE
    
int maze(int n,int m)
{
    int rightways=0;
    int downways=0;

    if (n==1 && m==1)
        return 1;

    if (n==1)
        rightways += maze(n,m-1);

    if (m==1)
        downways += maze(n-1,m);

    if (n>1 && m>1)
    {
        rightways += maze(n,m-1);
        downways += maze(n-1,m);    
    }

    int totalways = rightways + downways;
    
    return totalways;
}

int main()
{
    int r;
    printf("TOTAL ROWS R = ");
    scanf("%d",&r);

    int c;
    printf("TOTAL COLUMNS C = ");
    scanf("%d",&c);

    int totalways = maze(r,c);
    printf("TOTAL NO. OF WAYS = %d",totalways);

    return 0;
}
