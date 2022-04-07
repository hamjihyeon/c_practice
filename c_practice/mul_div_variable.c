#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 7;

    num1 = num1 * 3;    // num1에 3을 곱한 뒤 다시 num1에 저장
    // num1 *= 3;
    num2 = num2 / 2;    // num2에서 2를 나눈 뒤 다시 num2에 저장
    // num2 /= 2;

    printf("변수의 곱셈, 나눗셈\n");
    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3

    return 0;
}