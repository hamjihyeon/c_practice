#include <stdio.h>

int main()
{
    // 제어 문자 사용하기
    char c1 = 'a';           // 문자 a 할당
    char c2 = 'b';           // 문자 b 할당 
    char lineFeed = '\n';    // 제어 문자 \n 할당

    printf("제어문자로 사용\n");
    printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);    // 제어 문자도 %c로 출력할 수 있음
    printf("\n아스키코드로 사용\n");
    printf("%d 0x%x\n", lineFeed, lineFeed);    // 10 0xa: 제어 문자의 ASCII 코드 출력

    return 0;
}