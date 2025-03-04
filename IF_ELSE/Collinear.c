#include <stdio.h>

    // POINTS ARE TRIANGLE OR COLLINEAR
        
int main()
{
    double X1;      // VERTICES OF TRIANGLE
    printf("ENTER VALUE OF X1 : ");
    scanf("%lf", &X1);

    double Y1;
    printf("ENTER VALUE OF Y1 : ");
    scanf("%lf", &Y1);

    double X2;
    printf("ENTER VALUE OF X2 : ");
    scanf("%lf", &X2);

    double Y2;
    printf("ENTER VALUE OF Y2 : ");
    scanf("%lf", &Y2);

    double X3;
    printf("ENTER VALUE OF X3 : ");
    scanf("%lf", &X3);

    double Y3;
    printf("ENTER VALUE OF Y3 : ");
    scanf("%lf", &Y3);

    double M1 = (Y2 - Y1) / (X2 - X1);
    double M2 = (Y3 - Y2) / (X3 - X2);

    if (M1 == M2)
        printf("IT IS A STRAIGHT LINE");

    else
        printf("IT IS A TRIANGLE");

    return 0;
}

