#include<stdio.h>

    // ORDER OF FUNTION MATTER
    // FUN 1 HMESHA UPR HONA CHAIYE FUN 2 SE AGR FUN 2 NE FUN 1 KO CALL KIYA H TO 
    // BS UPR HONA CHAHIYE CHAHE KHI BHI HO
    // JRURI NHI KI JUST USKE UPR HONA CHAHIYE

void england()
{
    printf("YOU ARE IN ENGLAND\n");     // 6 //
    return;     // RETURN KA MTLB WHA JAO JIS FUNTION NE CALL KIYA  // 7 //
}

void australia()
{
    printf("YOU ARE IN AUSTRALIA\n");   // 4 //
    england();  //CALLING ENGLAND       // 5 //
    return;     // 8 //
}

void india()
{
    printf("YOU RAE IN INDIA\n");   // 2 //
    australia();    //CALLING AUSTRALIA     // 3 //
    return;     // 9 //
}

int main()
{
    india();    // CALLING INDIA    // 1 //
    return 0;   // 10 //
}