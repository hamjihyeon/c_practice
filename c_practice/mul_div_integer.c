#include <stdio.h>

int main()
{
    // 곱셈 나눗셈 하기
    int num1;
    int num2;

    num1 = 2 * 3;    // 2에 3를 곱해서 num1에 저장
    num2 = 7 / 2;    // 7에서 2를 나누어서 num2에 저장

    printf("정수의 곱셈, 나눗셈\n");
    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3: 소수점을 사용하지 않고 최대한 나눌 수 있는 값이 3
    printf("\n");

    float num3;
    float num4;

    num3 = 2.73f * 3.81f;    // 2.73에 3.81f을 곱해서 num1에 저장
    num4 = 7.0f / 2.0f;      // 7.0에서 2.0을 나누어서 num2에 저장

    printf("실수의 곱셈, 나눗셈\n");
    printf("%f\n", num3);    // 10.401299
    printf("%f\n", num4);    // 3.500000

    return 0;
}