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

    // 문자형 증감연산자
    char c1 = 'b';
    char c2 = 'b';

    c1++;    // 문자 자료형 변수의 값을 1 증가시킴, 'c'로 바뀜
    c2--;    // 문자 자료형 변수의 값을 1 감소시킴, 'a'로 바뀜

    printf("문자형 증감연산자\n");
    printf("문자형을 아스키코드로 c1에 1더하고 출력, c2에 1빼고 출력\n");
    printf("c1 : %c c2 : %c\n", c1, c2);    // c a: b에서 1 증가시켰으므로 c, b에서 1 감소시켰으므로 a


    return 0;
}