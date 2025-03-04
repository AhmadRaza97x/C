#include<stdio.h>

    // PRINT MAXIMUM ELEMENT OF AN ARRAY

int main()
{

    int marks[10] = {89,35,34,26,15,94,64,26,49};
    int max = marks[0];
    
    for (int i = 1; i < 10; i++)
    {
        if (max < marks[i])
            max = marks[i];
    }

    printf("%d",max);
    
    return 0;
}