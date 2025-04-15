#include<stdio.h>
int main()
{
  int i=10;

  printf("%d ",sizeof (i=i+10)); // SIZEOF K ANDAR I=I+10 YE UPDATE NHI KAREGA
  printf("%d ",i);

    return 0;
}