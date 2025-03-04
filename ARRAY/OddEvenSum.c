#include<stdio.h>

    // FIND SUM OF EVEN INDEX ELEMENT - SUM OF ODD INDEX ELEMENT OF ARRAY

int main()
{
    int sumeven = 0;
    int sumodd = 0;

    int array[8]={1,2,3,4,5,6,7,8};

    for (int i = 0; i < 8; i++)
    {
        if (i%2==0)
            sumeven += array[i];

        else
            sumodd += array[i]; 
    }

    printf("%d ",sumeven-sumodd);
    
    return 0;
}
