#include<stdio.h>
#include<string.h>
#include<stdbool.h>

    // NESTING
    // ALL FEATURE OF POKEMON WITH SOME EXTRA FEATURE

int main()
{
    typedef struct pokemon
    {
       int hp;
       int speed;
       int attack;
       char tier;
       char name[15];
    }pokemon;

    typedef struct legendrypokemon
    {
        pokemon normal;
        char ability[100];
    }legendrypokemon;

    typedef struct godpokemon
    {
        legendrypokemon advance;
        int specialattack;
    }godpokemon;
    
    legendrypokemon a;
        strcpy(a.ability,"Pressure");
        a.normal.hp = 150;
        a.normal.attack = 180;
        strcpy(a.normal.name,"Mewtwo");
        a.normal.speed = 180;
        a.normal.tier = 'S';

    godpokemon b;
        b.specialattack = 300;
        strcpy(b.advance.ability,"Turn Anyone To Stonr");
        b.advance.normal.attack = 500;
        b.advance.normal.hp = 200;
        strcpy(b.advance.normal.name,"Godu");
        b.advance.normal.speed = 250;
        b.advance.normal.tier = 'G';
    
    return 0;
}
