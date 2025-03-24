#include<stdio.h>

    // MATRIX GIVEN
    // PRINT TRANSPOSE OF MATRIX
    // 1 2 3   --> 1 4
    // 4 5 6   --> 2 5
    //         --> 3 6

int main()
{
    int a[2][3]={1,2,3,4,5,6};
    int b[3][2];

    for (int i = 0; i < 3; i++)     // IT IS ONLY FOR STORE
    {
        for (int j  = 0; j < 2; j++)
        {
            b[i][j]=a[j][i];
        }
    }

    for (int i = 0; i < 3; i++)     // THIS IS FOR PRINTING
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
