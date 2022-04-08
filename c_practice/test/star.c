// 표준 입력으로 삼각형의 높이가 입력됩니다(입력 값의 범위는 3~10). 
// 입력된 높이만큼 산 모양으로 별을 출력하는 프로그램을 만드세요(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다). 
// 이때 출력 결과는 예제와 정확히 일치해야 합니다. 
// 모양이 같더라도 공백이나 빈 줄이 더 들어가면 틀린 것으로 처리됩니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int height;
    int i = 0;
    int j = 0;

    printf("피라미드의 높이를 정해주세요 >> ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++) {

        for (int j = 0; j < 2 * height - 1; j++) {

            if ((j + i >= height - 1) && (j - i <= height - 1))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");

    }    

    return 0;
}