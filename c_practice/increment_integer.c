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
    printf("\n");

    float num3 = 2.1f;
    float num4 = 2.1f;

    num3++;    // �Ǽ��� ������ ���� 1 ������Ŵ
    num4--;    // �Ǽ��� ������ ���� 1 ���ҽ�Ŵ

    printf("�Ǽ��� ����������\n");
    printf("num3�� 1���ϰ� ���, num4�� 1���� ���\n");
    printf("num3 : %f num4 : %f\n", num3, num4);    // 3.100000 1.100000
    printf("\n");

    // ������ ����������
    char c1 = 'b';
    char c2 = 'b';

    c1++;    // ���� �ڷ��� ������ ���� 1 ������Ŵ, 'c'�� �ٲ�
    c2--;    // ���� �ڷ��� ������ ���� 1 ���ҽ�Ŵ, 'a'�� �ٲ�

    printf("������ ����������\n");
    printf("�������� �ƽ�Ű�ڵ�� c1�� 1���ϰ� ���, c2�� 1���� ���\n");
    printf("c1 : %c c2 : %c\n", c1, c2);    // c a: b���� 1 �����������Ƿ� c, b���� 1 ���ҽ������Ƿ� a
    printf("\n");


    // ��ġ�� ���� ���������� ����
    int num5 = 2;
    int num6 = 2;
    int num7;
    int num8;

    num7 = num5++;    // num1�� ���� num3�� �Ҵ��� �� num1�� ���� 1 ������Ŵ
    // num7 = num5;
    // num5 = num5 + 1;
    num8 = num6--;    // num2�� ���� num4�� �Ҵ��� �� num2�� ���� 1 ���ҽ�Ŵ
    // num8 = num6;
    // num6 = num6 - 1;

    printf("��ġ�� ���� ���������� ����\n");
    printf("num7 -> 2����ϰ� 1����, num8 -> 2����ϰ� 1 ����\n");
    printf("num7 : %d num8 : %d\n", num7, num8);    // 2 2
    printf("\n");

    int num9 = 2;
    int num10 = 2;
    int num11;
    int num12;

    num11 = ++num9;    // num1�� ���� 1 ������Ų �� num3�� �Ҵ�
    // num9 = num9 + 1;
    // num11 = num9;
    num12 = --num10;    // num2�� ���� 1 ���ҽ�Ų �� num4�� �Ҵ�
    // num10 = num10 - 1;
    // num12 = num10;

    printf("num11 -> 1�����ϰ� ���, num12 -> 1�����ϰ� ���\n");
    printf("num11 : %d num12 : %d\n", num11, num12);    // 3 1
    printf("\n");

    printf("<������ �Ҵ����� �ʰ� �Լ��� �μ��� ���>\n");
    int num13 = 2;
    int num14 = 2;

    printf("�ٲ�� ��\n");
    printf("%d %d\n", num13++, num14--);    // 2 2: num1, num2�� ���� ���� ����� �� ���� ������ ����
    printf("�ٲ� ��\n");
    printf("%d %d\n", num13, num14);        // 3 1: ���� �����ڰ� ������ ���

    return 0;
}