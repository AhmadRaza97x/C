#include<stdio.h>

    // COUNT NO. OF DIGIT IN ARRAY ELEMENT GREATER THAN GIVEN NO.

int main()
{
    int x = 4;
    int count = 0;
    int array[8]={1,2,3,4,5,6,7,8};

    for (int i = 0; i < 8; i++)
    {
        if (array[i]>x)
            count +=1;
    }

    printf("%d ",count);
    
    return 0;
}
