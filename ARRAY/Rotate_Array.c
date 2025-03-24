#include<stdio.h>

    // ROTATE ARRAY
    // BY REVERSING

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
    int n=9;
    int k;
    printf("ENTER K : ");
    scanf("%d",&k);

    if (k>9)
        k=k%n;
    
    int a[9] = {1,2,3,4,5,6,7,8,9};

    reverse(a,0,n-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);


    for (int i = 0; i < 8; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
