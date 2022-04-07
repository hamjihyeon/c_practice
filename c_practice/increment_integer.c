#include <stdio.h>

int main()
{
    // 증감연산자
    int num1 = 1;

    num1++;    // 정수형 변수의 값을 1 증가시킴
    // num1 = num1 + 1;
    // num1 += 1;

    printf("정수형 증가연산자\n");
    printf("num1에 1더하고 출력\n");
    printf("%d\n", num1);    // 2
    printf("\n");

    int num2 = 2;
    // num2 = num2 - 1;
    // num2 -= 1;

    num2--;    // 정수형 변수의 값을 1 감소시킴

    printf("정수형 감소연산자\n");
    printf("num1에 1빼고 출력\n");
    printf("%d\n", num2);    // 1


    return 0;
}