#include<stdio.h>

    // COUNT NO. OF TRIPLETE & PRINT
    // SUM OF 3 ELEMENT = GIVEN NO.

int main()
{
    int x = 12;
    int count = 0;
    int array[8]={1,2,3,4,5,6,7,8};

    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
           for (int k  = j+1; k < 8; k++)
           {
                if (array[i] + array[j] + array[k] == x)
                {
                    count +=1;
                    printf("(%d,%d,%d)\n",array[i],array[j],array[k]);
                }
           }
        }
    }
    
    printf("%d",count);
    
    return 0;
}
