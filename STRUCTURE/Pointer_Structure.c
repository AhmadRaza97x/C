#include<stdio.h>
#include<string.h>
#include<stdbool.h>

    // STRUCTURE POINTER
    // IT IS PASS BY REFERENCE

typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
}pokemon;

void change(pokemon* p)
{
    (*p).hp = 1000;
    return;
}

int main()
{
// INITIALISE & DECLARE

    pokemon pikachu;
    // pokemon pikachu = {60,70,100,'A',"Pikachu"}; // SMART WAY
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

// MODIFY USING POINTER

    // (*x).hp = 500;   // METHOD 1
    x->hp = 500;        // METHOD 2  BOTH ARE SAME
    printf("\n%d\n",pikachu.hp);

// PASS BY REFERENCE

    change(&pikachu);
    printf("%d\n",pikachu.hp);

    return 0;
}
