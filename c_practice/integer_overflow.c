#include <stdio.h>

int main()
{
    // 오버플로우와 언더플로우

	char num20 = 128;             // char에 저장할 수 있는 최댓값 127보다 큰 수를 할당 -> 오버플로우 발생

	unsigned char num21 = 256;    // unsigned char에 저장할 수 있는 최댓값 255보다 큰 수를 할당 -> 오버플로우 발생

	printf("오버플로우\n");
	printf("%d %u\n", num20, num21);    // -128 0: 저장할 수 있는 범위를 넘어서므로 최솟값부터 다시 시작
	printf("\n");

    return 0;
}