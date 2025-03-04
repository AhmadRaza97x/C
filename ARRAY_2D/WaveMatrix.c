#include<stdio.h>

    // WAVE PATTERN PRINTING
    // 10 11 12 13  --> 10 11 12 13 
    // 14 15 16 17  --> 17 16 15 14 *
    // 18 19 20 21  --> 18 19 20 21 
    // 22 23 24 25  --> 25 24 23 22 *
    // STEP --> REVERSE EVERY ODD NO. ROW ELEMENT

int main()
{
    int a[4][4]={10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};


// REVERSE
    for (int i = 0; i < 4; i++)
    {
        if (i%2!=0)
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
