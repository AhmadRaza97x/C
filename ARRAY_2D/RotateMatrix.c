#include<stdio.h>

    // ROTATE MATRIX 90 DEGREE
    // 10 11 12 13  --> 22 18 14 10
    // 14 15 16 17  --> 23 19 15 11
    // 18 19 20 21  --> 24 20 16 12
    // 22 23 24 25  --> 25 21 17 13
    // STEP 1 --> TRANSPOSE
    // STEP 2 --> REVERSE EVERY ROW

int main()
{
    int a[4][4]={10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

// TRANSPOSE
    for (int i = 1; i < 4; i++)     
    {
        for (int j  = 0; j < i; j++)
        {
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
        }
    }

// REVERSE
    for (int i = 0; i < 4; i++)
    {
        int k=0,l=3;
        while (k<=l)
        {
                int temp =a[i][k];
                a[i][k]=a[i][l];
                a[i][l]=temp; 
                k++,l--;
        }
    }

// PRINT
    for (int i = 0; i < 4; i++)     
    {
        for (int j  = 0; j < 4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}
