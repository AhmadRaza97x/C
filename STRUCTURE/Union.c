#include<stdio.h>
#include<string.h>
#include<stdbool.h>

    // UNION SAME AS STRUCTURE BUT
    // IT CAN BE ACCESS ONCE AT A TIME
    // AGR SB EK SATH ACCESS KRENGE TO SIRF LAST WALA SHI HOGA
    // AUR BAKI KA BHI LAST WALA ANSWER HOGA 

typedef union pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;

int main()
{
// INITIALISE & DECLARE

    pokemon pikachu;
        pikachu.hp = 60;
        pikachu.attack = 70;
        pikachu.speed = 100;
        pikachu.tier = 'A';
        strcpy(pikachu.name,"Pikachu");

// PRINTING

        printf("%d\n",pikachu.hp);
        printf("%d\n",pikachu.attack);
        printf("%d\n",pikachu.speed);
        printf("%c\n",pikachu.tier);
        printf("%s\n",pikachu.name);

    return 0;
}
