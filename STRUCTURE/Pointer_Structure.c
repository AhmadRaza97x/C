#include<stdio.h>
#include<string.h>
#include<stdbool.h>

    // STRUCTURE POINTER

typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;

int main()
{
    pokemon pikachu;
        pikachu.hp = 60;
        pikachu.attack = 70;
        pikachu.speed = 100;
        pikachu.tier = 'A';
        strcpy(pikachu.name,"Pikachu");

// PRINTING POINTER

    pokemon* x = &pikachu;
        printf("%p\n",&pikachu.hp);
        printf("%p\n",&pikachu.attack);
        printf("%p\n",&pikachu.speed);
        printf("%p\n",&pikachu.tier);
        printf("%p\n",pikachu.name);

    printf("%p\n",x);

    return 0;
}
