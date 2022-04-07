// 표준 입력으로 금액이 입력됩니다. 
// 1회당 요금은 1,200원이고, 교통카드를 사용했을 때마다의 잔액을 각 줄에 출력하는 프로그램을 만드세요
// (scanf 함수 호출 전에 문자열을 출력하면 안 됩니다). 
// 단, 최초 금액은 출력하지 않아야 합니다. 
// 그리고 잔액은 음수가 될 수 없으며 잔액이 부족하면 출력을 끝냅니다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    
    int money;
    int count = 0;

    printf("충전하실 금액을 입력하세요 >> ");
    scanf("%d", &money);
    printf("\n");

    while(money >= 1200) {
        money -= 1200;
        printf("%d 원 남았습니다.\n", money);
        count++;
    }
    printf("\n총 %d번 이용하실 수 있습니다.", count);


    return 0;
}