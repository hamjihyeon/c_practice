#include <stdio.h>

int main() {

    // 실수형 변수 선언하기
	float num1 = 0.1f;               // 단정밀도 부동소수점 변수를 선언하고 값을 할당
									 // float는 숫자 뒤에 f를 붙임
	double num2 = 3867.215820;       // 배정밀도 부동소수점 변수를 선언하고 값을 할당
									 // double은 숫자 뒤에 아무것도 붙이지 않음
	long double num3 = 9.327513l;    // 배정밀도 부동소수점 변수를 선언하고 값을 할당
									 // long double은 숫자 뒤에 l을 붙임

	// float와 double은 %f로 출력, long double은 %Lf로 출력
	printf("실수형 변수 선언하기\n");
	printf("%f %f %Lf\n", num1, num2, num3);    // 0.100000 3867.215820 9.327513
	printf("\n");
    // 지수 표기법
	float num4 = 3.e5f;             // 지수 표기법으로 300000을 표기
									// float는 숫자 뒤에 f를 붙임
	double num5 = -1.3827e-2;       // 지수 표기법으로 -0.013827을 표기
									// double은 숫자 뒤에 아무것도 붙이지 않음
	long double num6 = 5.21e+9l;    // 지수 표기법으로 5210000000을 표기
									// long double은 숫자 뒤에 l을 붙임

	// float와 double은 %f로 출력, long double은 %Lf로 출력
	printf("지수 표기법\n");
	printf("%f %f %Lf\n", num4, num5, num6); // 300000.000000 -0.013827 5210000000.000000

	// 지수 표기법으로 출력할 때는 float와 double은 %e로 출력, long double은 %Le로 출력
	printf("%e %e %Le\n", num4, num5, num6); // 3.000000e+05 -1.382700e-02 5.210000e+09
	printf("\n");

	// 실수 자료형 크기 구하기
	float num7 = 0.0f;
	double num8 = 0.0;
	long double num9 = 0.0l;

	printf("실수 자료형 크기\n");
	printf("float: %d, double: %d, long double: %d\n",
		sizeof(num7),     // 4: sizeof로 float 변수의 자료형 크기를 구함
		sizeof(num8),     // 8: sizeof로 double 변수의 자료형 크기를 구함
		sizeof(num9)      // 8: sizeof로 long double 변수의 자료형 크기를 구함
	);
	printf("\n");
    return 0;
}