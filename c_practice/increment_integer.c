#include <stdio.h>

int main()
{
    // ����������
    int num1 = 1;

    num1++;    // ������ ������ ���� 1 ������Ŵ
    // num1 = num1 + 1;
    // num1 += 1;

    printf("������ ����������\n");
    printf("num1�� 1���ϰ� ���\n");
    printf("%d\n", num1);    // 2
    printf("\n");

    int num2 = 2;
    // num2 = num2 - 1;
    // num2 -= 1;

    num2--;    // ������ ������ ���� 1 ���ҽ�Ŵ

    printf("������ ���ҿ�����\n");
    printf("num1�� 1���� ���\n");
    printf("%d\n", num2);    // 1


    return 0;
}