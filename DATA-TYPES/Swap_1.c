#include<stdio.h>

 // SWAPPING WITHOUT EXTRA CONTAINER

int main()
{
    int a,b;

    printf("ENTER A : ");
    scanf("%d",&a);

    printf("ENTER B : ");
    scanf("%d",&b);

    // METHOD 1: USE OF (+,-)

    // a=a+b;
    // b=a-b;
    // a=a-b;

    // METHOD 2: USE OF XOR (^)
    
    // a=a^b;
    // b=a^b;
    // a=a^b;

    // METHOD 3: USE OF OPERATOR

    a=5 ,b=10;
    b=(a+b)-(a=b);

    printf("A=%d  B=%d",a,b);

    return 0;
}
