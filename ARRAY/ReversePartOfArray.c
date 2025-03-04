#include<stdio.h>

    // REVERSE PART OF ARRAY
    // WITHOUT EXTRA ARRAY
    // WE USE SWAPPING

void reverse(int a[],int i,int j)
{
    while (i<=j)
    {
        int temp =a[i];
        a[i]=a[j];
        a[j]=temp; 
        i++;
        j--;
    }

    return;   
}

int main(int argc, char const *argv[])
{
    int a[9] = {1,2,3,4,5,6,7,8,9};
    reverse(a,2,6);

    for (int i = 0; i < 8; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
