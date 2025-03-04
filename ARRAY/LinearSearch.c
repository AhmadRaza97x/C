#include<stdio.h>

    // GIVEN ARRAY A[N]={ONE ELMENT MISSING}
    // FIND THAT ELEMENT

int main()
{
    int a[9]={1,2,3,5,6,7,8,9};
    int sum1=0;
    int sum2=(9*10)/2;

    for (int i = 0; i <= 7; i++)
        sum1=sum1+a[i];

    printf("MISSING VALUE = %d",sum2-sum1);
   
    return 0;
}
