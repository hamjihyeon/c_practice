#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// 표준 입력으로 원의 지름(실수)이 입력됩니다. 
// 다음 소스 코드를 완성하여 원의 넓이가 출력되게 만드세요. 
// 단, 원주율은 M_PI를 사용하세요.
int main()
{
    float diameter;
    float radius;
    float area;
 
    scanf("%f", &diameter);

    diameter /= 2;
    area  = diameter * diameter * M_PI;
 
    printf("%f\n", area);
 
    return 0;
}