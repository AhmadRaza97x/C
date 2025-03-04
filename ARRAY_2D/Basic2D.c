#include<stdio.h>

    // IT IS TYPE OF MATIX
    // A[ROW][COLUMN]

int main()
{
    int r;
    printf("ENTER ROWS : ");
    scanf("%d",&r);

    int c;
    printf("ENTER COLUMN : ");
    scanf("%d",&c);

    int a[r][c];  // INITIALISATION ALSO == {2,5,3,7,5,9}; OR {{2,5,3},{7,5,9}};

// TAKING INPUT
    for (int i = 0; i < r; i++)  
    {
       for (int j = 0; j < c; j++)
       {
            printf("ENTER A[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
       }
    }

// PRINT OUTPUT
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
            printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    
    return 0;
}
