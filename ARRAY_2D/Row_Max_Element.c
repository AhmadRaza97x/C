#include<stdio.h>

    // PRINT MAX NO. 1 CONTAIN
    // PRINT THEIR ROW NO.
    // 1 0 1 0  --> 2
    // 1 1 1 0  --> 3
    // 1 1 1 1  --> 4

int main()
{
    int a[3][4]={1,0,1,0,1,1,1,0,1,1,1,1};
    int maxcount=0;
    int maxindex=-1;

    for (int i = 0; i < 3; i++)
    {
        int count=0;

        for (int j = 0; j < 4; j++)
            if (a[i][j]==1)
                count++;
    
        if (maxcount<count)
        {
            maxcount=count;
            maxindex=i;
        }
    }
    
    printf("MAX 1 CONTAIN : %d\n",maxcount);
    printf("MAX ROW NO. : %d",maxindex);

    return 0;
}
