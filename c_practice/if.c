#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    // if 조건문

    // 조건문에 ;붙이면 안됨 -> 조건식이 printf가 됨.
    // 문장이 한 줄일 땐 중괄호 생략 가능하지만
    // 문장이 두 줄일 땐 중괄호 꼭 필요함 -> 안하면 위에 한 줄만 출력됨.
    int num1 = 10;
 
    if (num1 == 10)    // num1이 10이면
    {
        printf("10입니다.\n");    // "10입니다."를 출력
    }

    // 실수, 문자로 비교
    float num2 = 0.1f;
    char c1 = 'a';
 
    printf("실수비교\n");
    if (num2 == 0.1f)  // 실수 비교
        printf("0.1입니다.\n");
    printf("\n");
    
    printf("문자비교\n");
    if (c1 == 'a')     // 문자 비교
        printf("a입니다.\n");
    printf("\n");
 
    printf("문자 -> 아스키코드로 비교\n");
    if (c1 == 97)      // 문자를 ASCII 코드로 비교
        printf("a입니다.\n");
    printf("\n");


    // scanf로 비교
    int num3;

    printf("값을 입력하세요 >> ");
    scanf("%d", &num3);    // 입력받은 값을 변수에 저장
 
    if (num3 == 10)             // num1이 10이면
    {
        printf("10입니다.\n");  // "10입니다."를 출력
    }
 
    if (num3 == 20)             // num1이 20이면
    {
        printf("20입니다.\n");  // "20입니다."를 출력
    }
 
    return 0;
}