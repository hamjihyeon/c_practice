#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
    // if ���ǹ�

    // ���ǹ��� ;���̸� �ȵ� -> ���ǽ��� printf�� ��.
    // ������ �� ���� �� �߰�ȣ ���� ����������
    // ������ �� ���� �� �߰�ȣ �� �ʿ��� -> ���ϸ� ���� �� �ٸ� ��µ�.
    int num1 = 10;
 
    if (num1 == 10)    // num1�� 10�̸�
    {
        printf("10�Դϴ�.\n");    // "10�Դϴ�."�� ���
    }

    // �Ǽ�, ���ڷ� ��
    float num2 = 0.1f;
    char c1 = 'a';
 
    printf("�Ǽ���\n");
    if (num2 == 0.1f)  // �Ǽ� ��
        printf("0.1�Դϴ�.\n");
    printf("\n");
    
    printf("���ں�\n");
    if (c1 == 'a')     // ���� ��
        printf("a�Դϴ�.\n");
    printf("\n");
 
    printf("���� -> �ƽ�Ű�ڵ�� ��\n");
    if (c1 == 97)      // ���ڸ� ASCII �ڵ�� ��
        printf("a�Դϴ�.\n");
    printf("\n");


    // scanf�� ��
    int num3;

    printf("���� �Է��ϼ��� >> ");
    scanf("%d", &num3);    // �Է¹��� ���� ������ ����
 
    if (num3 == 10)             // num1�� 10�̸�
    {
        printf("10�Դϴ�.\n");  // "10�Դϴ�."�� ���
    }
 
    if (num3 == 20)             // num1�� 20�̸�
    {
        printf("20�Դϴ�.\n");  // "20�Դϴ�."�� ���
    }
 
    return 0;
}