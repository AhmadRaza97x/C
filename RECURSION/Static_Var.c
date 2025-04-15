#include<stdio.h>

    // STATIC VARIABLE
    
void fun(){
    static int a=0;
    ++a;
    printf("%d",a);
}
void main(){
    fun();
    fun();
    fun();
    }