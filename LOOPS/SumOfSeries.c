#include<stdio.h>

    //1+2-3+4-5+6.....n

int main()
{
    int n;
    printf("ENTER n : ");
    scanf("%d",&n);

    if (n%2==0) 
        printf("%d",-(n/2));

    else 
        printf("%d",-(n/2)+(n));   //WE CAN TAKE -(N-1)/2
                                    // BUT -N/2 SAME [3/2==2/2 IN INTEGER]
    return 0;
}
