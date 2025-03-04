#include <stdio.h>

    // FIND UNIQUE ELMENT OF ARRAY
    // ALL ELEMENT ARE TWICE EXCEPT ONE

int call(int arr[]) 
{
    int result = 0;
    for (int i = 0; i <=12; i++) 
        result ^= arr[i];  // XOR all elements
    
    return result;  
}

int main()
{
    int arr[13] = {1,1,2,3,3,4,4,5,6,2,5,6,7};  
    
    int ans = call(arr);
    printf("UNIQUE ELEMENT IS : %d\n",ans);

    return 0;
}
