#include <stdio.h>

int main()
{
    // ���� ������ �ϱ�
    int num1;
    int num2;

    num1 = 2 * 3;    // 2�� 3�� ���ؼ� num1�� ����
    num2 = 7 / 2;    // 7���� 2�� ����� num2�� ����

    printf("������ ����, ������\n");
    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3: �Ҽ����� ������� �ʰ� �ִ��� ���� �� �ִ� ���� 3
    printf("\n");

    float num3;
    float num4;

    num3 = 2.73f * 3.81f;    // 2.73�� 3.81f�� ���ؼ� num1�� ����
    num4 = 7.0f / 2.0f;      // 7.0���� 2.0�� ����� num2�� ����

    printf("�Ǽ��� ����, ������\n");
    printf("%f\n", num3);    // 10.401299
    printf("%f\n", num4);    // 3.500000

    return 0;
}