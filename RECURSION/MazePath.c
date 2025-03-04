#include<stdio.h>

    // MAZE PATH
    // LIKE CHESS BORAD
    // CONDITION : ONLY MOVE = DOWN OR RIGHT
    // CR = CURRENT ROW , CC = CURRENT COLUMN , EC = ENDING COLUMN , ER = ENDING ROW

int maze(int cr,int cc,int er,int ec)
{
    int rightways=0;
    int downways=0;

    if (cr==er && cc==ec)
        return 1;

    if (cr==er)
        rightways += maze(cr,cc+1,er,ec);

    if (cc==ec)
        downways += maze(cr+1,cc,er,ec);

    if (cr<er && cc<ec)
    {
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
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

    int totalways = maze(1,1,r,c);
    printf("TOTAL NO. OF WAYS = %d",totalways);

    return 0;
}
