#include<stdio.h>
#include<stdbool.h>

    // BUBBLE SORT
    // ASCENDING ORDER

int main()
{
    int arr[5] = {5,4,3,2,1};
    int n = 5;

// PRINTING
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

// BUBBLE SORT
    for (int i = 0; i < n-1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n-1-i; j++)     // PASSES
        {
            if (arr[j] > arr[j+1])          // SWAPING
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if (flag == true)
            break;
    }

// PRINTING
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
