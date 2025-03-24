#include<stdio.h>

    // ARRAY ELEMENT UPDATE
    // EVEN INDEXED ELEMENT INCREASE BY 10
    // ODD INDEXED ELEMENT MULTIPLY BY 2

int main()
{
    int array[7]={1,2,3,4,5,6,7};
    for (int i = 0; i < 7; i++)
    {
        if (i%2==0)
            array[i] +=10;
            
        else
            array[i] *=2;

        printf("%d ",array[i]);
    }
    
    return 0;
}
