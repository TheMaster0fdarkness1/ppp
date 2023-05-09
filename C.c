#include "dino_screen.h"
#include <stdio.h>

int main()
{
    screen();
    int game_state = 1;
    int input = 0;
    while(game_state)
    {
        printf("input(1~3)>");
        scanf("%d", &input);
        if(input==2)
        {
            explain();
            while(game_state)
            {
                printf("input(1~2)>");
                scanf("%d",&input);
                if(input==1)
                {
                    screen();
                    game_state=0;
                }
                else if(input==2)
                {
                    explain();
                }
                else
                {
                    printf("please enter again")
                }
            }
            game_state=1;
        }
    }
}