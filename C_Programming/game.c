#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned)time(NULL));

    int lower = 1;
    int upper = 100;
    int userNumber;
    int guess;
    int tries = 0;

    printf("1에서 100 사이의 숫자를 선택해주세요. 컴퓨터가 맞히려고 시도할 것입니다: ");
    scanf("%d", &userNumber);

    if (userNumber < 1 || userNumber > 100) {
        printf("입력한 숫자가 범위를 벗어납니다. 1에서 100 사이의 숫자를 선택해주세요.\n");
        return 1;
    }

    do {
        guess = (lower + upper) / 2;
        printf("컴퓨터의 추측: %d\n", guess);
        tries++;

        if (guess > userNumber) {
            printf("HIGH\n");
            upper = guess - 1;
        } else if (guess < userNumber) {
            printf("LOW\n");
            lower = guess + 1;
        } else {
            printf("정답을 찾았습니다! 정답은 %d이고, 시도횟수는 %d입니다.\n", guess, tries);
        }

    } while (guess != userNumber);

    return 0;
}
