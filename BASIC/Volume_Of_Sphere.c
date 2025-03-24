#include <stdio.h>

    // VOLUME OF SPHERE

int main()
{
    int r;
    printf("ENTER RADIUS : ");
    scanf("%d", &r);

    float v =( 4 * 3.14 * r * r * r )/ 3;
    printf("THE VOLUME IS:%f", v);

    return 0;
}
