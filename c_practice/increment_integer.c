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
    printf("\n");

    float num3 = 2.1f;
    float num4 = 2.1f;

    num3++;    // 실수형 변수의 값을 1 증가시킴
    num4--;    // 실수형 변수의 값을 1 감소시킴

    printf("실수형 증감연산자\n");
    printf("num3에 1더하고 출력, num4에 1빼고 출력\n");
    printf("num3 : %f num4 : %f\n", num3, num4);    // 3.100000 1.100000
    printf("\n");


    return 0;
}