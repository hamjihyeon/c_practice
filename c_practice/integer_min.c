#include <stdio.h>
#include <limits.h>    // 자료형의 최댓값과 최솟값이 정의된 헤더 파일

int main()
{
    // 자료형의 최솟값
	char num1 = CHAR_MIN;          // char의 최솟값
	short num2 = SHRT_MIN;         // short의 최솟값
	int num3 = INT_MIN;            // int의 최솟값
	long num4 = LONG_MIN;          // long의 최솟값
	long long num5 = LLONG_MIN;    // long long의 최솟값

	printf("자료형 최솟값\n");
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
	// -128 -32768 -2147483648 -2147483648 -9223372036854775808
	printf("\n");

	// 자료형의 최댓값
	char num6 = CHAR_MAX + 1;          // char의 최댓값보다 큰 수를 할당. 오버플로우 발생
	short num7 = SHRT_MAX + 1;         // short의 최댓값보다 큰 수를 할당. 오버플로우 발생
	int num8 = INT_MAX + 1;            // int의 최댓값보다 큰 수를 할당. 오버플로우 발생
	long long num9 = LLONG_MAX + 1;    // long long의 최댓값보다 큰 수를 할당. 오버플로우 발생

	// 부호 있는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값부터 다시 시작
	printf("부호있는 정수 오버플로우 -> 최솟값부터 시작\n");
	printf("%d %d %d %lld\n", num6, num7, num8, num9);
	// -128 -32768 -2147483648 -9223372036854775808
    printf("\n");

	unsigned char num10 = UCHAR_MAX + 1;          // unsigned char의 최댓값보다 큰 수를 할당 오버플로우 발생
	unsigned short num11 = USHRT_MAX + 1;         // unsigned short의 최댓값보다 큰 수를 할당 오버플로우 발생
	unsigned int num12 = UINT_MAX + 1;            // unsigned int의 최댓값보다 큰 수를 할당 오버플로우 발생
	unsigned long long num13 = ULLONG_MAX + 1;    // unsigned long long의 최댓값보다 큰 수를 할당 오버플로우 발생
	// unsigned char, unsigned short, unsigned int는 %u로 출력하고 
	// unsigned long long은 %llu로 출력
	// 부호 없는 정수에서 저장할 수 있는 범위를 넘어서면 최솟값 0부터 다시 시작
    printf("부호없는 정수 오버플로우 -> 최솟값 0으로 시작\n");
	printf("%u %u %u %llu\n", num10, num11, num12, num13); // 0 0 0 0
    printf("\n");

	char num14 = CHAR_MIN - 1;          // char의 최솟값보다 작은 수를 할당. 언더플로우 발생
	short num15 = SHRT_MIN - 1;         // short의 최솟값보다 작은 수를 할당. 언더플로우 발생
	int num16 = INT_MIN - 1;            // int의 최솟값보다 작은 수를 할당. 언더플로우 발생
	long long num17 = LLONG_MIN - 1;    // long long의 최솟값보다 작은 수를 할당. 언더플로우 발생
	// 부호 있는 정수에서 최솟값보다 작아지면 최댓값부터 다시 시작
    printf("부호있는 정수 언더플로우 -> 최댓값부터 시작\n");
	printf("%d %d %d %lld\n", num14, num15, num16, num17); // 127 32767 2147483647 9223372036854775807
    printf("\n");

	unsigned char num18 = 0 - 1;         // unsigned char의 최솟값보다 작은 수를 할당 언더플로우 발생
	unsigned short num19 = 0 - 1;        // unsigned short의 최솟값보다 작은 수를 할당 언더플로우 발생
	unsigned int num20 = 0 - 1;          // unsigned int의 최솟값보다 작은 수를 할당 언더플로우 발생
	unsigned long long num21 = 0 - 1;    // unsigned long long의 최솟값보다 작은 수를 할당 언더플로우 발생
	// 부호 없는 정수에서 최솟값보다 작아지면 최댓값부터 다시 시작
    printf("부호없는 정수 언더플로우 -> 최댓값부터 시작\n");
	printf("%u %u %u %llu\n", num18, num19, num20, num21);
	// 255 65535 4294967295 18446744073709551615
	printf("\n");

    return 0;
}