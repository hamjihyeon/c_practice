// 표준 입력으로 실수 두 개가 입력됩니다. 
// 다음 소스 코드를 완성하여 입력된 두 실수를 더한 값에서 4.5를 감소시킨 값이 출력되게 만드세요.
//정답에는 밑줄 친 부분에 들어갈 코드만 작성해야 합니다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    float num1;
    float num2;
    float num3;
 
    scanf("%f %f", &num1, &num2);
    num3 = num1 + num2 - 4.5;

    printf("%f\n", num3);
 
    return 0;
}