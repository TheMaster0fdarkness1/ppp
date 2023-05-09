#include <stdio.h>
#include "dino_screen.h"
int main()
{
    int game_state = 1;
    int input = 0;
    while(game_state)
    {   
        print_title_screen1();  // 처음 화면 출력
        printf("input(1~3)>");
        scanf("%d",&input);
        if(input==1)  // 1. Game start 선택
        {
            printf("Starting Game...\n");
            // 게임 시작 코드 구현
        }
        else if(input==2)  // 2. How To Play 선택
        {
            printf("How To Play\n");
            // 게임 방법 설명 코드 구현
        
        }
        else if(input==3)  // 3. Exit 선택
        {
            game_state = 0;
        }
    }

    return 0;
}

int main2()
{
    int game_state = 1;
    int input = 0;
    while(game_state)
    {   
        print_title_screen2();
        printf("#################################################\n");
        printf("##                                             ##\n");
        printf("##           Jump Over The Obstacle            ##\n");
        printf("##                                             ##\n");
        printf("##                                             ##\n");
        printf("##               Return To Menu?               ##\n");
        printf("##                (1.Yes  2.No)                ##\n");
        printf("##                                             ##\n");
        printf("##                                             ##\n");
        printf("##                                             ##\n");
        printf("##                                             ##\n");
        printf("#################################################\n");  // 두번째 화면 출력
        printf("input(1~2)>");
        scanf("%d",&input);
        if(input==1)  // 1. Yes 선택
        {
            main();  // 다시 첫 번째 main 함수 호출
            game_state = 0;
        }
        else if(input==2)  // 2. No 선택
        {
            printf("Exiting game...\n");
            game_state = 0;
        }
    }

    return 0;
}

