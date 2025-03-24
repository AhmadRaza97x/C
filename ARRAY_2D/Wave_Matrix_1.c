#include<stdio.h>

    // WAVE PATTERN PRINTING
    // 10 11 12 13  --> 10 14 18 22 
    // 14 15 16 17  --> 23 19 15 11
    // 18 19 20 21  --> 12 16 20 24
    // 22 23 24 25  --> 25 21 17 23

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
                    int temp =a[k][i];
                    a[k][i]=a[l][i];
                    a[l][i]=temp; 
                    k++,l--;
            }
        }
    }

// PRINT
    for (int i = 0; i < 4; i++)     
    {
        for (int j  = 0; j < 4; j++)
        {
            printf("%d ",a[j][i]);

        }
        printf("\n");
    }
   
    return 0;
}
