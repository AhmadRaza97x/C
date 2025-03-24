#include<stdio.h>

    // SPIRIAL PATTERN PRINTING
    // N BY MATRIX GIVEN
    // STORE 1 TO N SQUARE ELMENT IN SPIRAL ORDER
    // AND PRINT MATRIX

int main()
{
// TAKING INPUT ORDER OF MATRIX
    int n;
    printf("ENTER ORDER OF MATRIX A : ");
    scanf("%d",&n);

    int a[n][n];

// STORE SPIRAL
    int minrow=0;
    int maxrow=n-1;
    int mincol=0;
    int maxcol=n-1;
    int tne=n*n;
    int count=0;

    while (count<tne)
    {
// STORE MINIMUM ROW
        for (int i = mincol; i <= maxcol; i++)
        {
            count++;
            a[minrow][i]=count;
        }
        minrow++;

// STORE MAXIMUM COLUMN
        if (count>tne)
            break;
        for (int i = minrow; i <= maxrow; i++)
        {
            count++;
            a[i][maxcol]=count;
        }
        maxcol--;

// STORE MAXIMUM ROW IN REVERSE
        if (count>tne)
            break;
        for (int i = maxcol; i >= mincol; i--)
        {
            count++;
            a[maxrow][i]=count;
        }
        maxrow--;

// STORE MINIMU COLUMN IN REVERSE
        if (count>tne)
            break;
        for (int i = maxrow; i >= minrow; i--)
        {
            count++;
            a[i][mincol]=count;
        }
        mincol++;
        if (count>tne)
            break;          
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
