#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1; // 1부터 100까지의 난수 생성
    int guess;
    int attempts = 0;

    printf("1부터 100 사이의 숫자를 맞춰보세요.\n");

    while (1) {
        printf("추측한 숫자를 입력하세요:\n");
        scanf_s("%d", &guess);
        attempts++;

        if (guess == secretNumber) {
            printf("정답이다! 시도 횟수: %d\n", attempts);
            break;
        }
        else if (guess < secretNumber) {
            printf("더 큰 숫자다!\n");
            printf("틀렸으니 죽어라!\n");
            break;
        }
        else {
            printf("더 작은 숫자다!\n");
            printf("틀렸으니 죽어라!\n");
            break;
        }
    }

    return 0;
}