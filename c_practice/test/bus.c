// 표준 입력으로 나이(만 나이)가 입력됩니다. 
// 교통카드 시스템에서 시내버스 요금은 다음과 같으며 각 나이에 맞게 요금을 차감한 뒤 잔액이 출력되게 만드세요(if, else if 사용). 
// 현재 교통카드에는 10,000원이 들어있습니다.

// 어린이(초등학생, 만 7세 이상 12세 이하): 450원
// 청소년(중?고등학생, 만 13세 이상 18세 이하): 720원
// 어른(일반, 만 19세 이상): 1,200원

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int age;
    int balance = 10000;

    printf("나이를 입력하세요 >> ");
    scanf("%d", &age);

    if (age >= 19)
        balance -= 1200;

    else if (age >= 13)
        balance -= 720;

    else if (age >= 7)
        balance -= 450;

    printf("남은금액은 %d 원입니다.\n", balance);

    return 0;
}