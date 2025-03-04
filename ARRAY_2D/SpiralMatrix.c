#include<stdio.h>

    // SPIRIAL PATTERN PRINTING
    // 10 11 12 13  ------->  
    // 14 15 16 17  |----->|
    // 18 19 20 21  |---->||
    // 22 23 24 25  <------| 

int main()
{
// TAKING INPUT ORDER OF MATRIX
    int m;
    printf("\nENTER ROW OF MATRIX A : ");
    scanf("%d",&m);
    int n;
    printf("ENTER COLUMN OF MATRIX A : ");
    scanf("%d",&n);

// TAKING ELEMENT OF MATIX
    int a[m][n];
    printf("\nENTER ELEMENT OF MATRIX A \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d",&a[i][j]);
    }

// SPIRAL PRINTING
    int minrow=0;
    int maxrow=m-1;
    int mincol=0;
    int maxcol=n-1;
    int tne=m*n;
    int count=0;

    while (count<tne)
    {
// PRINT MINIMUM ROW
        for (int i = mincol; i <= maxcol; i++)
        {
            printf("%d  ",a[minrow][i]);
            count++;
        }
        minrow++;

// PRINT MAXIMUM COLUMN
        if (count>tne)
            break;
        for (int i = minrow; i <= maxrow; i++)
        {
            printf("%d  ",a[i][maxcol]);
            count++;
        }
        maxcol--;

// PRINT MAXIMUM ROW IN REVERSE
        if (count>tne)
            break;
        for (int i = maxcol; i >= mincol; i--)
        {
            printf("%d  ",a[maxrow][i]);
            count++;
        }
        maxrow--;

// PRINT MINIMU COLUMN IN REVERSE
        if (count>tne)
            break;
        for (int i = maxrow; i >= minrow; i--)
        {
            printf("%d  ",a[i][mincol]);
            count++;
        }
        mincol++;
        if (count>tne)
            break;          
    }
    
    return 0;
}
