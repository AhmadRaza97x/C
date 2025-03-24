#include<stdio.h>

    // BASIC STRUCTURE

int main()
{
// STRUCTURE

    struct Pokemon  // USER DEFINE DATA TYPE
    {
       int hp;
       int speed;
       int attack;
       char tier;
    };

// INITIALISING

    struct Pokemon Pikachu;
    Pikachu.hp=50;
    Pikachu.speed=100;
    Pikachu.attack=60;
    Pikachu.tier='A';

    struct Pokemon Charizard;
    Charizard.hp=80;
    Charizard.speed=80;
    Charizard.attack=130;
    Charizard.tier='S';

    struct Pokemon Mewtwo;
    Mewtwo.hp=150;
    Mewtwo.speed=200;
    Mewtwo.attack=170;
    Mewtwo.tier='G';

    printf("%d",Charizard.attack);
    
    return 0;
}
