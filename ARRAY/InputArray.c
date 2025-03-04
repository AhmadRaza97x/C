#include<stdio.h>

    // ARRAY
    // TAKE INPUT FROM USER

int main()
{
    int size;
    printf("ENTER ARRAY SIZE : ");
    scanf("%d",&size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("ENTER A[%d] = ",i);
        scanf("%d",&array[i]);
    }

    printf("%d",array[2]);
    
    return 0;
}
