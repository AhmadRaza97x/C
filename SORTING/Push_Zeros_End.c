#include<stdio.h>

    // PUSH ALL ZERO AT END
    // WITHOUT CHANGING ORDER OF NON ZERO

int main()
{
    int arr[9] = {5,0,2,0,0,4,1,3,0};

// PRINTING
    printf("ORIGINAL ARRAY : \n");
    for (int  i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }

// METHOD 1 : WITHOUT SWAPPING
    // int ans[9];
    // int indx = 0;
    // for (int i = 0; i < 9; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         ans[indx] = arr[i];
    //         indx++;
    //     }
    // }
    // while (indx != 9)
    // {
    //     ans[indx] = 0;
    //     indx++;
    // }

// METHOD 2 : BY BUBBLE SORT 
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8-i; j++)
        {
            if (arr[j] == 0)
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
// PRINTING   
    printf("\n");
    printf("PUSHED ZERO ARRAY : \n");

    // for (int  i = 0; i < 9; i++)
    // {
    //     printf("%d ",ans[i]);
    // }

    for (int  i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
