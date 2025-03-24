#include<stdio.h>
#include<string.h>

    // STRUCTURE ARRAY

int main()
{
// DECLARATION

    typedef struct pokemon
    {
       int hp;
       int speed;
       int attack;
       char tier;
       char name[15];
    }pokemon;

// INITIALISING

    pokemon array[3];

    strcpy(array[0].name,"CHARIZARD");
    array[0].hp=100;
    array[0].speed=30;
    array[0].attack=50;
    array[0].tier='A';

    strcpy(array[1].name,"MEWTWO");
    array[1].hp=100;
    array[1].speed=130;
    array[1].attack=150;
    array[1].tier='S';

    strcpy(array[2].name,"PIKACHU");
    array[2].hp=30;
    array[2].speed=80;
    array[2].attack=50;
    array[2].tier='B';

// PRONTING

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",array[i].name);
        printf("Tier   : %c\n",array[i].tier);
        printf("Attack : %d\n",array[i].attack);
        printf("Hp     : %d\n",array[i].hp);
        printf("Speed  : %d\n",array[i].speed);
        printf("\n");
    }
    

    return 0;
}
