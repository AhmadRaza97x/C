#include<stdio.h>

    //USE OF SCANF 
    //AREA OF CIRCLE

int main()
{
    float radius;
    printf("ENTER RADIUS : ");
    scanf("%f",&radius);

    float pi = 3.14;
    float area = pi * radius * radius;   

    printf("AREA OF CIRCLE IS:%f",area);

    return 0;
}
