#include <stdio.h>

int main()
{
    // 상수사용하기
    // 상수 = 선언과 동시에 값을 초기화시켜야됨
    const int con1 = 1;
    const float con2 = 0.1f;
    const char con3 = 'a';

    printf("상수사용하기\n");
    printf("%d %f %c\n", con1, con2, con3);    // 1 0.100000 a

    return 0;
}