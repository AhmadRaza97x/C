#include<stdio.h>

    // PRINT TRANSPOSE OF SQUARE MATRIX
    // WITHOUT ANY EXTRA MATRIX
    // BY SWAPING
    // 1 2 3   --> 1 4 7
    // 4 5 6   --> 2 5 8
    // 7 8 9   --> 3 6 9

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};

    for (int i = 1; i < 3; i++)     
    {
        for (int j  = 0; j < i; j++)
        {
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
        }
    }

    for (int i = 0; i < 3; i++)    
    {
        for (int j  = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
