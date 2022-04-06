#include <stdio.h>

int main()
{
    
	// 변수만들고 값 저장하기

	// 정수형 변수 선언
	int num1;
	int num2;
	int num3;
	// 변수에 값 할당(저장)
	num1 = 10;
	num2 = 20;
	num3 = 30;

	// 저장된 값을 %d로 출력
	printf("변수 만들고 값 저장\n");
	printf("%d %d %d\n", num1, num2, num3);
	printf("\n");

	// 변수 여러개 선언

	// 각 변수는 모두 int형
	// 다른 자료형으로 하고 싶다면 각각 선언해야함
	int num4, num5, num6;
	num4 = 40;
	num5 = 50;
	num6 = 60;

	printf("변수 여러개 선언\n");
	printf("%d %d %d\n", num4, num5, num6);
	printf("\n");

	// 변수 사용하면서 초기화하기
	// -> 변수를 선언하면서 값을 할당 = 초기화
	int num7 = 70;
	int num8 = 80, num9 = 90;

	printf("변수 초기화하기\n");
	printf("%d %d %d\n", num7, num8, num9);
	printf("\n");


    return 0;
}