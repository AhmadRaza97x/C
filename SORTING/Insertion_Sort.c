#include<stdio.h>

    // INSERTION SORT
    
int main()
{
    int arr[5] = {1,5,3,0,2};
    int n = 5;

// PRINTING
    printf("UNSORTED ARRAY : \n");
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

// INSERTION SORT
    for (int i = 1; i <= n-1; i++)
    {
        int j = i;
        while (j>=1 && arr[j]<arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
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
