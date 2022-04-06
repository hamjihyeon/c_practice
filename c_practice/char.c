#include <stdio.h>

int main() {

    // 문자 변수 선언하기
    char c1 = 'a';    // 문자 변수를 선언하고 문자 a를 저장
    //char c1 = 97;
    //char c1 = 0x61;
    char c2 = 'b';    // 문자 변수를 선언하고 문자 b를 저장
    //char c2 = 98;
    //char c2 = 0x62
 
    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정숫값이 출력됨
    printf("문자, 아스키코드, 16진수 출력\n");
    printf("%c, %d, 0x%x\n", c1, c1, c1);    // a, 97: a의 ASCII 코드값은 97
    printf("%c, %d, 0x%x\n", c2, c2, c2);    // b, 98: b의 ASCII 코드값은 98

    return 0;
}