#include <stdio.h>
 
int main()
{
    // else if문
    // 중괄호 생략가능
    // 단, printf가 2줄이상이면 안됨
    int num1 = 5;
 
    if (num1 == 10)
    {
        printf("10입니다.\n");
    }
    else    // if의 조건식이 만족하지 않을 때 코드를 실행
    {
        printf("10이 아닙니다.\n");    // num1은 10이 아니므로 "10이 아닙니다."가 출력됨
    }
    printf("\n");

    if (2)    // 0이 아니므로 참
        printf("참\n");
    else
        printf("거짓\n");
    printf("\n");

    if (0)    // 0이므로 거짓
        printf("참\n");
    else
        printf("거짓\n");
    printf("\n");

    // 조건식 여러개 지정
    int num2 = 10;
    int num3 = 20;

    printf("조건식 여러개 지정\n");
    if (num2 == 10 && num3 == 20)    // num1이 10이면서 num2이 20일 때
        printf("참\n");
    else
        printf("거짓\n");
    return 0;
}
