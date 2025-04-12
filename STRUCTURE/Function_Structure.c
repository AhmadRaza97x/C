#include<stdio.h>
#include<string.h>
#include<stdbool.h>

    // PASSING STRUCTURE TO FUNCTION
    // WE MUST DECLARE GLOBALLY
    // STRUCTURE ARE PASS BY VALUE

typedef struct pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
}pokemon;

void fun(pokemon p)
{
    printf("\n%d\n",p.hp);
    return;
}

void change(pokemon q)
{
    q.hp = 70;
    q.attack = 60;
    q.speed = 110;
    return;
}

int main()
{
    pokemon pikachu;
        pikachu.hp = 60;
        pikachu.attack = 50;
        pikachu.speed = 100;

    change(pikachu);
        printf("%d\n",pikachu.hp);
        printf("%d\n",pikachu.attack);
        printf("%d\n",pikachu.speed);

    fun(pikachu);

    return 0;
}
