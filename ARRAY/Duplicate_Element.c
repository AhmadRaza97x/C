#include<stdio.h>

    // FIND DUPLICATE ELEMENT IN ARRAY

int main()
{
    int array[8]={1,2,3,7,5,6,7,8};

    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
            if (array[i] == array[j])
            {
                printf("%d HAS DUPLICATE\n",array[i]);
                break;
            }
        }
    }
    
    return 0;
}
