#include <stdio.h>

int main()
{
    // 리터럴 사용하기
    // 리터럴 : 소스코드에 입력한 값 그대로
    // 표기법 지켜야됨
    printf("리터럴 사용하기");
    printf("%d\n", 10);                 // 10: 정수 리터럴
    printf("%f\n", 0.1f);               // 0.100000: 실수 리터럴
    printf("%c\n", 'a');                // a: 문자 리터럴
    printf("%s\n", "Hello, world!");    // Hello, world!: 문자열 리터럴
    printf("\n");

    printf("정수리터럴\n");
    printf("%d\n", 19);        // 19: 10진 정수 리터럴
    printf("0%o\n", 017);      // 017: 8진 정수 리터럴
    printf("0x%X\n", 0x1F);    // 0x1F: 16진 정수 리터럴
    printf("\n");

    printf("실수리터럴\n");
    printf("%f\n", 0.1f);       // 0.100000: 실수 리터럴 소수점 표기
    printf("%f\n", 0.1F);       // 0.100000: 실수 리터럴 소수점 표기
    printf("%f\n", 1.0e-5f);    // 0.000010: 실수 리터럴 지수 표기법
    printf("%f\n", 1.0E-5F);    // 0.000010: 실수 리터럴 지수 표기법

    return 0;
}