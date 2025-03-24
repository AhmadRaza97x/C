#include<stdio.h>
#include<limits.h>

    // PRINT 2nd LARGEST ELEMENT OF AN ARRAY

int main()
{

    int marks[10] = {89,35,34,26,72,15,94,94,26,49};
    int max = INT_MIN;
    int smax = INT_MIN;
    
    for (int i = 0; i < 10; i++)
    {
        if (max < marks[i])
        {
            smax=max;
            max = marks[i];
        }
        else if (smax<marks[i] && max!=marks[i])
        {
            smax=marks[i];
        }   
    }

    printf("%d",smax);
    
    return 0;
}