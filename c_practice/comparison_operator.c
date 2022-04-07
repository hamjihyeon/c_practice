#include <stdio.h>
 
int main()
{
    // 비교 연산자
    int num1 = 10;
    
    printf("비교 연산자\n");
    printf("%d\n", num1 == 10);    // 1: num1이 10과 같은지
    printf("%d\n", num1 != 5);     // 1: num1이 5와 다른지
 
    printf("%d\n", num1 > 10);     // 0: num1이 10보다 큰지
    printf("%d\n", num1 < 10);     // 0: num1이 10보다 작은지
 
    printf("%d\n", num1 >= 10);    // 1: num1이 10보다 크거나 같은지
    printf("%d\n", num1 <= 10);    // 1: num1이 10보다 작거나 같은지
    printf("\n");

    // 삼항 연산자
    int num2 = 5;
    int num3;
 
    num3 = num2 ? 100 : 200;    // num2이 참이면 num3에 100을 할당, 거짓이면 num3에 200을 할당
    // if (num2)          // num2이 참이면 
    //     num3 = 100;    // num3에 100을 할당
    // else               // num2이 거짓이면
    //     num3 = 200;    // num3에 200을 할당

    
    printf("삼항 연산자\n");
    printf("%d\n", num3); // 100: num1이 5이므로 참. num2에는 100이 할당됨
    printf("\n");

    // if문과 비교 연산자 함께 사용
    int num4 = 10;
 
    printf("if문과 비교 연산자 함께 사용\n");
    if (num4 == 10)    // num4이 10과 같은지 검사
        printf("10입니다.\n");
 
    if (num4 != 5)     // num4이 5와 다른지 검사
        printf("5가 아닙니다.\n");
 
    if (num4 > 10)     // num4이 10보다 큰지 검사
        printf("10보다 큽니다.\n");
 
    if (num4 < 10)     // num4이 10보다 작은지 검사
        printf("10보다 작습니다.\n");
 
    if (num4 >= 10)    // num4이 10보다 크거나 같은지 검사
        printf("10보다 크거나 같습니다.\n");
 
    if (num4 <= 10)    // num4이 10보다 작거나 같은지 검사
        printf("10보다 작거나 같습니다.\n");
    printf("\n");

    // 실수, 문자와 비교연산자 사용
    float num5 = 0.1f;
    char c1 = 'a';
    
    printf("실수, 문자와 비교 연산자 함께 사용\n");
    if (num5 >= 0.09f)   // num5이 실수 0.09보다 크거나 같은지 검사
        printf("0.09보다 크거나 같습니다.\n");
 
    if (c1 == 'a')       // c1이 문자 a와 같은지 검사
        printf("a입니다.\n");
 
    if (c1 == 97)        // c1이 정수 97과 같은지 검사
        printf("97입니다.\n");
 
    if (c1 < 'b')        // c1이 문자 b보다 작은지 검사
        printf("b보다 작습니다.\n");
    printf("\n");
 
    // 함수 안에서 삼항 연산자 사용
    int num6 = 5;

    printf("함수 안에서 삼항 연산자 사용\n");
    printf("%s\n", num6 == 10 ? "10입니다." : "10이 아닙니다."); // num6은 5이므로 "10이 아닙니다."
    printf("\n");

    
    return 0;
}