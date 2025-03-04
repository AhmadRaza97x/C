#include<stdio.h>

    // MATRIX MULTIPLICATION
    // res[i][j] = ( a[i][o],a[i][1],..) * ( b[0][j],b[1][j],..)
    
int main()
{
// TAKING INPUT ORDER OF MATRIX
    int m;
    printf("\nENTER ROW OF MATRIX A : ");
    scanf("%d",&m);
    int n;
    printf("ENTER COLUMN OF MATRIX A : ");
    scanf("%d",&n);
    int p;
    printf("ENTER ROW OF MATRIX B : ");
    scanf("%d",&p);
    int q;
    printf("ENTER ROW OF 1st MATRIX B : ");
    scanf("%d",&q);

    if (n==p)
    {
// TAKING ELEMENT OF MATIX
        int a[m][n];
        printf("\nENTER ELEMENT OF MATRIX A \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                scanf("%d",&a[i][j]);
        }
        
        int b[p][q];
        printf("ENTER ELEMENT OF MATRIX B \n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
                scanf("%d",&b[i][j]);
        }

        int res[m][q];
        int cr=n;    // IT DENOTE 1st KA COLUMN & 2nd KA ROW
    
// STORING & CALCULATION
        printf("\nMULTIPLICAT MATRIX A & B IS :-->\n\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j]=0;
                for (int k = 0; k < cr; k++)
                    res[i][j] += a[i][k]*b[k][j];
            }
        }
    
// PRINTING
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
                printf("%d ",res[i][j]);
            
            printf("\n");
        } 
        printf("\n");
    }

    else
        printf("\nMULTIPLICATION NOT POSSIBLE..\n\n");
    
    return 0;
}
