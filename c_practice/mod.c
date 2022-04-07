#include <stdio.h>

int main()
{
    // 나머지 연산하기

    printf("정수의 나머지 연산하기\n");
    printf("1 %% 3 : 0 ... %d\n", 1 % 3);    // 1: 1을 3으로 나누면 몫은 0 나머지는 1
    printf("2 %% 3 : 0 ... %d\n", 2 % 3);    // 2: 2를 3으로 나누면 몫은 0 나머지는 2
    printf("3 %% 3 : 1 ... %d\n", 3 % 3);    // 0: 3을 3으로 나누면 몫은 1 나머지는 0
    printf("4 %% 3 : 1 ... %d\n", 4 % 3);    // 1: 4를 3으로 나누면 몫은 1 나머지는 1
    printf("5 %% 3 : 1 ... %d\n", 5 % 3);    // 2: 5를 3으로 나누면 몫은 1 나머지는 2
    printf("6 %% 3 : 1 ... %d\n", 6 % 3);    // 0: 6을 3으로 나누면 몫은 2 나머지는 0
    printf("\n");

    int num1 = 7;
 
    num1 = num1 % 2;    // num1에서 2를 나눈 뒤 나머지를 구하여 다시 num1에 저장
    // num1 %= 2;
 
    printf("변수의 나머지 연산하기\n");
    printf("나머지 구한 뒤 다시 num1에 저장\n");
    printf("7 %% 2 : 3... %d\n", num1);    // 1

    return 0;
}