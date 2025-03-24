#include<stdio.h>

    // SUM OF ARRAY ALL ELEMENT
    
int main()
{
    int marks[5] = {1,2,3,4,5};
    int sum = 0;

    for (int i = 0; i < 5; i++)
        sum=sum+marks[i];

    printf("%d",sum);

    return 0;
}