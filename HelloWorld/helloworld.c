#include <stdio.h>

int main() 
{
    printf("기본 사용법\n");
	printf("Hello, world!\n");
	printf("\n");

	// 서식 지정자
	printf("서식 지정자\n");
	printf("%s\n", "Hello, world!");
	printf("\n");
	// %s\n -> 문자열을 출력할 때 값으로 바뀌는 부분
	// %s : Hello, world 로 바뀜

	//%s 사용법
	printf("사용법\n");
	printf("%s %s\n", "Hello", "1234");
	printf("\n");

	// , 사용법
	printf(", 사용법\n");
	printf("%s %s\n", "Hello", "1234");
	printf("%s, %s\n", "Hello", "1234");
	printf("%s, %s\n", "Hello,", "1234");
	printf("\n");

	// %s 공백만들기
	printf("공백만들기\n");
	printf("%s%s\n", "Hello", "1234");
	printf("%s%s\n", "Hello ", "1234");
	printf("\n");
	

    return 0;
}