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
    printf("\n");


    // 위치에 따른 증감연산자 차이
    int num5 = 2;
    int num6 = 2;
    int num7;
    int num8;

    num7 = num5++;    // num1의 값을 num3에 할당한 뒤 num1의 값을 1 증가시킴
    // num7 = num5;
    // num5 = num5 + 1;
    num8 = num6--;    // num2의 값을 num4에 할당한 뒤 num2의 값을 1 감소시킴
    // num8 = num6;
    // num6 = num6 - 1;

    printf("위치에 따른 증감연산자 차이\n");
    printf("num7 -> 2출력하고 1증가, num8 -> 2출력하고 1 감소\n");
    printf("num7 : %d num8 : %d\n", num7, num8);    // 2 2
    printf("\n");

    int num9 = 2;
    int num10 = 2;
    int num11;
    int num12;

    num11 = ++num9;    // num1의 값을 1 증가시킨 뒤 num3에 할당
    // num9 = num9 + 1;
    // num11 = num9;
    num12 = --num10;    // num2의 값을 1 감소시킨 뒤 num4에 할당
    // num10 = num10 - 1;
    // num12 = num10;

    printf("num11 -> 1증가하고 출력, num12 -> 1감소하고 출력\n");
    printf("num11 : %d num12 : %d\n", num11, num12);    // 3 1
    printf("\n");

    printf("<변수에 할당하지 않고 함수의 인수로 사용>\n");
    int num13 = 2;
    int num14 = 2;

    printf("바뀌기 전\n");
    printf("%d %d\n", num13++, num14--);    // 2 2: num1, num2의 값을 먼저 출력한 뒤 증감 연산자 동작
    printf("바뀐 후\n");
    printf("%d %d\n", num13, num14);        // 3 1: 증감 연산자가 동작한 결과

    return 0;
}