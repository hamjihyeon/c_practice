#include <stdio.h>

int main() {
    //정수 자료형

	// signed = 부호가 있는 정수(...-1, 0, 1...)
	// unsigned = 부호가 없는 정수(0, 1...)
	// 부호 있는 정수 자료형
	char num1 = -10;           // 1바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
	short num2 = 30000;        // 2바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
	int num3 = -1234567890;    // 4바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
	long num4 = 1234567890;    // 4바이트 부호 있는 정수형으로 변수를 선언하고 값 할당
	long long num5 = -1234567890123456789;     // 8바이트 부호 있는 정수형으로 변수를 선언하고 값 할당

	printf("부호 있는 정수 자료형\n");
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
	printf("\n");

	// 부호 없는 정수 자료형
	unsigned char num6 = 200;                          // 1바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
	unsigned short num7 = 60000;                       // 2바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
	unsigned int num8 = 4123456789;                    // 4바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
	unsigned long num9 = 4123456789;                   // 4바이트 부호 없는 정수형으로 변수를 선언하고 값 할당
	unsigned long long num10 = 12345678901234567890;    // 8바이트 부호 없는 정수형으로 변수를 선언하고 값 할당

	// %u = unsigned
	printf("부호 없는 정수 자료형\n");
	printf("%u %u %u %lu %llu\n", num6, num7, num8, num9, num10);
	printf("\n");

    return 0;
}