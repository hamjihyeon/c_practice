#include <stdio.h>

int main() 
{
    printf("�⺻ ����\n");
	printf("Hello, world!\n");
	printf("\n");

	// ���� ������
	printf("���� ������\n");
	printf("%s\n", "Hello, world!");
	printf("\n");
	// %s\n -> ���ڿ��� ����� �� ������ �ٲ�� �κ�
	// %s : Hello, world �� �ٲ�

	//%s ����
	printf("����\n");
	printf("%s %s\n", "Hello", "1234");
	printf("\n");

	// , ����
	printf(", ����\n");
	printf("%s %s\n", "Hello", "1234");
	printf("%s, %s\n", "Hello", "1234");
	printf("%s, %s\n", "Hello,", "1234");
	printf("\n");

	// %s ���鸸���
	printf("���鸸���\n");
	printf("%s%s\n", "Hello", "1234");
	printf("%s%s\n", "Hello ", "1234");
	printf("\n");
	

    return 0;
}