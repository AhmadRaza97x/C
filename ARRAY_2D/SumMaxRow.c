#include<stdio.h>

    // PRINT SUM OF  MAX ROW ELEMENT IN 2D ARRAY
    // PRINT MAX SUM ROW
    // 1 2 3 4  --> 10
    // 5 6 3 4  --> 18
    // 6 4 2 7  --> 19

int main()
{
    int a[3][4]={1,2,3,4,5,6,3,4,6,4,2,7};
    int maxsum=0;
    int maxindex=-1;

    for (int i = 0; i < 3; i++)
    {
        int sum=0;

        for (int j = 0; j < 4; j++)
            sum +=a[i][j]; 

        if (maxsum<sum)
        {
            maxsum=sum;
            maxindex=i;
        }
    }

    printf("SUM OF MAX ROW ELEMENT : %d\n",maxsum);
    printf("AND THEIR ROW NO. : %d",maxindex);
    
    return 0;
}
