#include<stdio.h>
#include<limits.h>

    // SELECTION SORT

int main()
{
    int arr[7] = {7,4,5,9,8,2,1};
    int n = 7;

// PRINTING
    printf("UNSORTED ARRAY : \n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

// SELECTION SORT
    for (int i = 0; i < n-1; i++)       // PASSES
    {
        int min = INT_MAX;
        int minidx = -1;
        for (int j = i; j <= n-1; j++)  // MIN VALUE & INDEX
        {
            if (min > arr[j])
            {
                min = arr[j];
                minidx = j;
            }
        }
        int temp =arr[minidx];          // SWAPPING
        arr[minidx] = arr[i];
        arr[i] = temp;
    }

// PRINTING
    printf("\n");
    printf("SORTED ARRAY : \n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
