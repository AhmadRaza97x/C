#include<stdio.h>

// int x;     // GLOBAL VARIABLE

void f1(){
    extern int x;       //FORWARD DECLERATION
    ++x;
    printf("%d",x);
}

int x=10;       // GLOBAL VARIABLE

void f2(){
    ++x;
}
void main(){
    f1();
    f2();
    ++x;
    printf("%d",x);
}