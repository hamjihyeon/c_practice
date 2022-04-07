#include <stdio.h>

int main()
{
    // 실수형 증감연산자
    float num1 = 2.1f;
    float num2 = 2.1f;

    num1++;    // 실수형 변수의 값을 1 증가시킴
    num2--;    // 실수형 변수의 값을 1 감소시킴

    printf("%f %f\n", num1, num2);    // 3.100000 1.100000

    return 0;
}