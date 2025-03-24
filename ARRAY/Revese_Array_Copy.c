#include<stdio.h>

    // COPY ARRAY A IN B IN REVERSE ORDER

int main(int argc, char const *argv[])
{
    int a[5] = {1,2,3,4,5};
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        b[i]=a[4-i];
        printf("%d ",b[i]);
    }
    
    return 0;
}
